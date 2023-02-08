#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <sys/wait.h>
#include <unistd.h>
#include <limits.h>

#define HEADER_SIZE 12
#define RETURN_SIZE 4
#define X_SIZE 10

#define CONSTANTS 2
#define VARIABLES 5
#define FUNCTIONS 7

// > 4
#define POPULATION_SIZE 20
#define MAX_LENGTH 7
#define EPSYLON 1.0

#define BUFFER_SIZE 256
#define PATH_SIZE 6

double min = INT_MAX;

void generatePopulation( char series, int populationSize, int maxLength );
void generateProg( FILE * file, int lines );
double * rate( char series, int populationSize );
char ** selection( char series, int populationSize, double * rates );

void skipLines( FILE * file, int lines ) { while( lines-- > 0 ) fscanf(file, "%*[^\n]\n"); } 
void freeHandler( int ev, void * ptr ) { free(ptr); }

int main( int argc, char ** argv )
{
	char series = 'a';
	srand(time(NULL));
	generatePopulation( series, POPULATION_SIZE, MAX_LENGTH );
	double * rates = rate( series, POPULATION_SIZE );
	//while( 1 )
	{
		char ** parents = selection( series, POPULATION_SIZE, rates );
		for( int i = 0; i < POPULATION_SIZE; ++i )
		{
			printf("%s\n", parents[i]);
		}
	}
}

// Tournament 1 vs 1 vs 1 vs 1

char ** selection( char series, int populationSize, double * rates )
{
	char ** paths = calloc( populationSize, sizeof(char *) );
	if( !paths )
	{
		perror("CALLOC");
		exit(EXIT_FAILURE);
	}
	on_exit(freeHandler, paths);

	for( int i = 0; i<populationSize; ++i )
	{
		paths[i] = calloc( PATH_SIZE, PATH_SIZE );
		if( !paths[i] )
		{
			perror("CALLOC");
			exit(EXIT_FAILURE);
		}
		on_exit(freeHandler, paths[i]);
	}

	for( int i = 0; i<populationSize; ++i )
	{
		int indexA = rand()%populationSize; 
		int indexB;
		do
		{
			indexB = rand()%populationSize;
		}while( indexA == indexB );
		
		int indexC;
		do
		{
			indexC = rand()%populationSize;
		}while( indexC == indexB || indexC == indexA );
		
		int indexD;
		do
		{
			indexD = rand()%populationSize;
		}while( indexD == indexC || indexD == indexB || indexD == indexA );
		
		double a = rates[indexA];
		double b = rates[indexB];
		double c = rates[indexC];
		double d = rates[indexD];

		if( a<=b && a<=c && a<=d ) sprintf( paths[i], "%c%d.c", series, indexA+1 );
		else if( b<=a && b<=c && b<=d ) sprintf( paths[i], "%c%d.c", series, indexB+1 );
		else if( c<=b && c<=a && c<=d ) sprintf( paths[i], "%c%d.c", series, indexC+1 );
		else sprintf( paths[i], "%c%d.c", series, indexD+1 );
	}
	return paths;
}

double * rate( char series, int populationSize )
{
	double * rates = calloc(populationSize, sizeof(double));
	if( !rates)
	{
		perror("CALLOC");
		exit(EXIT_FAILURE);
	}
	on_exit(freeHandler, rates);

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
			rates[k-1] += (reference-result)*(reference-result);
		}
		fclose(x);
		fclose(y);
	min = ( rates[k] < min ) ? rates[k-1] : min;
	}
	for( int i = 1; i<=populationSize; ++i )
	{
		if( rates[i] == min )
		{
			char path[PATH_SIZE];
			sprintf(path, "%c%d.c", series, i);
			switch(fork())
			{
				case -1:
					perror("FORK");
					exit(EXIT_FAILURE);
					break;
				case 0:
					if( execlp("cp", "cp", path, "program.c", NULL) == -1 )
					{
						perror("EXEC CP");
						exit(EXIT_FAILURE);
					}
				default:
					wait(NULL);
			}
		}
	}
	printf("Minimum overall iterations: %lf\n", min);
	if( min < EPSYLON )
	{
		printf("Program finished\n");
		exit(EXIT_SUCCESS);
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
				fprintf(file, "sinus(%s, %s)", a, b);
				break;

			case 'e':
				fprintf(file, "exponent(%s, %s)", a, b);
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
