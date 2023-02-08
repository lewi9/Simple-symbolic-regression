#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <sys/wait.h>
#include <unistd.h>

#define HEADER_SIZE 12
#define RETURN_SIZE 4
#define X_SIZE 10

#define CONSTANTS 2
#define VARIABLES 5
#define FUNCTIONS 7

#define POPULATION_SIZE 20
#define MAX_LENGTH 7

#define BUFFER_SIZE 256
#define PATH_SIZE 6

void generatePopulation( char series, int populationSize, int maxLength );
void generateProg( FILE * file, int lines );
double * rate( char series, int populationSize );

void skipLines( FILE * file, int lines ) { while( lines-- > 0 ) fscanf(file, "%*[^\n]\n"); } 

int main( int argc, char ** argv )
{
	char series = 'a';
	srand(time(NULL));
	generatePopulation( series, POPULATION_SIZE, MAX_LENGTH );
	double * rates = rate( series, POPULATION_SIZE );
}

double * rate( char series, int populationSize )
{
	double * rates = calloc(populationSize, sizeof(double));
	if( !rates)
	{
		perror("CALLOC");
		exit(EXIT_FAILURE);
	}

	for( int k = 1; k<=populationSize; ++k )
	{
		char path[PATH_SIZE];
		sprintf(path, "%c%d.c", series, k);
		switch(fork())
		{
			case -1:
				perror("FORK");
				exit(EXIT_FAILURE);
			case 0:
				if( execlp("gcc", "gcc", "-Wall", path, "functions.o", "-o", "object", "-lm", NULL) == -1 )
				{
					perror("EXEC GCC");
					exit(EXIT_FAILURE);
				}
			default:
				wait(NULL);		
		}
		FILE * x = fopen("x.txt", "r");
		FILE * y = fopen("y.txt", "r");
		if( !x || !y )
		{
			perror("OPEN");
			exit(EXIT_FAILURE);
		}
		char * input;
		double result;
		double reference;
		for( int j = 0; j<X_SIZE; ++j )
		{
			fscanf(x, "%ms", &input);
			fscanf(y, "%lf", &reference);
			switch(fork())
			{
				case -1:
					perror("FORK");
					exit(EXIT_FAILURE);
				case 0:
					if( execlp("./object", "object", input, NULL) == -1 )
					{
						perror("EXEC OBJECT");
						exit(EXIT_FAILURE);
					}
				default:
					wait(NULL);
			}
			FILE * output = fopen("output.txt", "r");
			if( !output )
			{
				perror("OPEN");
				exit(EXIT_FAILURE);
			}
			fscanf(output, "%lf", &result);
			fclose(output);
			rates[k] += (reference-result)*(reference-result);
		}
		fclose(x);
		fclose(y);
	}
	unlink("object");
	return rates;
}

void generatePopulation( char series, int populationSize, int maxLength )
{
	for( int k = 1; k<=populationSize; ++k )
	{
		int max = rand()%maxLength + 1;
		char path[PATH_SIZE];
		sprintf(path, "%c%d.c", series, k);
		char * buff;
		FILE *header = fopen("header.txt", "r");
		FILE *ret = fopen("return.txt", "r");
		FILE *result = fopen(path, "w");
		if( !header || !ret || !result ) 
		{
			perror("OPEN");
			exit(EXIT_FAILURE);
		}

		for( int i = 0; i<HEADER_SIZE; ++i )
		{
			fscanf(header, "%m[^\n]%*c", &buff);
			fprintf(result, "%s\n", buff);
		}
		generateProg(result, max);		
		for( int i = 0; i<RETURN_SIZE; ++i )
		{
			fscanf(ret, "%m[^\n]%*c", &buff);
			fprintf(result, "%s\n", buff);
		}
		fclose(header);
		fclose(ret);
		fclose(result);
	}
}


void generateProg( FILE * file, int lines )
{
	int line = 0;
	FILE * variables = fopen("variables.txt", "r");
	FILE * constants = fopen("constants.txt", "r");
	FILE * functions = fopen("functions.txt", "r");
	
	if( !variables || !constants || !functions )
	{
		perror("OPEN");
		exit(EXIT_FAILURE);
	}

	fprintf(file, "//s\n");

	for( int i = 0; i<lines; ++i )
	{
		char * var;
		char a[BUFFER_SIZE];
		char b[BUFFER_SIZE];
		char function;
		int flagC1 = 0;
		int flagC2 = 0;
		double constant1;
		double constant2;
	
		if( i!=lines-1)
		{	
			line = rand()%VARIABLES;
			skipLines(variables, line);
			fscanf(variables, "%ms", &var);
			rewind(variables);
		}
		else sscanf("result", "%ms", &var);

	       	line = rand()%(VARIABLES+CONSTANTS);
		if( line < CONSTANTS )
		{
			skipLines(constants, line);
			fscanf(constants, "%lf", &constant1);
			rewind(constants);
			flagC1 = 1;
		}
		else
		{
			line = line-CONSTANTS;
			skipLines(variables, line);
			fscanf(variables, "%s", a);
			rewind(variables);
		}

		line = rand()%(VARIABLES+CONSTANTS);
		if( line < CONSTANTS )
		{
			skipLines(constants, line);
			fscanf(constants, "%lf", &constant2);
			rewind(constants);
			flagC2 = 1;
		}
		else
		{
			line = line-CONSTANTS;
			skipLines(variables, line);
			fscanf(variables, "%s", b);
			rewind(variables);
		}

		line = rand()%FUNCTIONS;
		skipLines(functions, line);
		fscanf(functions, "%c", &function);
	       	rewind(functions);
		
		if( flagC1 ) sprintf(a, "%lf", constant1);
		if( flagC2 ) sprintf(b, "%lf", constant2);

		fprintf(file, "%s = ", var);

		switch(function)
		{
			case '+':
				fprintf(file, "add(%s, %s)", a, b);
				break;
			case '-':
				fprintf(file, "sub(%s, %s)", a, b);
				break;

			case '*':
				fprintf(file, "mul(%s, %s)", a, b);
				break;
			case '/':
				fprintf(file, "div(%s, %s)", a, b);
				break;

			case 's':
				fprintf(file, "sin(%s)", a);
				break;

			case 'e':
				fprintf(file, "exp(%s)", a);
				break;

			case 'p':
				fprintf(file, "pow(%s, %s)", a, b);
				break;

			default:
				fprintf(stderr, "Undefined operation %c", function);
				exit(EXIT_FAILURE);
		}
		fprintf(file, ";\n");		
	}

	fprintf(file, "//e\n");
	fclose(variables);
	fclose(constants);
	fclose(functions);
}
