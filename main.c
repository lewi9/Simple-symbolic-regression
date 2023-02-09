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
// even ( %2 == 0 )
#define POPULATION_SIZE 20
#define MAX_LENGTH 7

// Mutation probability of every element MUT_P = MUTATION_FACTOR1 / MUTATION_FACTOR2
// Mutation probability of every program 4 * (NUMBER_OF_LINES - HEADER_SIZE - RETURN_SIZE - 2) * MUT_P
#define MUTATION_FACTOR1 1
#define MUTATION_FACTOR2 1000
#define EPSYLON 1.0
#define STOP INT_MAX

#define BUFFER_SIZE 256
#define PATH_SIZE 6

double min = INT_MAX;

void generatePopulation( char series, int populationSize, int maxLength );
void generateProg( FILE * file, int lines );
double * rate( char series, int populationSize );
char ** selection( char series, int populationSize, double * rates );
char reproduction( char series, int populationSize, char ** parents );
void crossMutate( FILE * a, FILE * b, FILE * child, int aSize, int bSize, int aMin, int aMax, int bMin, int bMax);
void mutateVar( FILE * child );
void mutateVarCon( FILE * child );
void mutateFunc( FILE * child );
void copyLine( FILE * a, FILE * child );

void destroyParents( char series, int populationSize ) 
{ 
	for( int k = 1; k <= populationSize; ++k ) 
	{ 
		char path[PATH_SIZE];
		sprintf(path, "%c%d.c", series, k);
		unlink(path);
	}
}

int skipLines( FILE * file, int lines ) 
{ 
	int t;
	while( lines-- ) 	
	{
		t = fscanf(file, "%*[^\n]\n");
	}
	return t;
} 
void freeHandler( int ev, void * ptr ) { free(ptr); }

int main( int argc, char ** argv )
{
	int t = 0;
	char series = 'a';
	char oldSeries;
	srand(time(NULL));
	generatePopulation( series, POPULATION_SIZE, MAX_LENGTH );
	double * rates = rate( series, POPULATION_SIZE );
	while( t++ < STOP )
	{
		printf("Iteration: %d\n", t);
		char ** parents = selection( series, POPULATION_SIZE, rates );
		oldSeries = series;
		series = reproduction( series, POPULATION_SIZE, parents );
		printf("ello\n");
		destroyParents( oldSeries, POPULATION_SIZE );
		rates = rate( series, POPULATION_SIZE );
	}
}

void copyLine( FILE * a, FILE * child )
{
	char * var;
	char * elem1;
	char * elem2;
	char * fun;

	fscanf(a, "%ms %*c %m[^(]%*c%m[^,]%*c %m[^)]%*c%*c", &var, &fun, &elem1, &elem2);
	int mutatation = rand()%MUTATION_FACTOR2;
	if(mutatation < MUTATION_FACTOR1) mutateVar(child);
	else fprintf(child, "\t%s = ", var);
		
	mutatation = rand()%MUTATION_FACTOR2;
	if(mutatation < MUTATION_FACTOR1) mutateFunc(child);
	else fprintf(child, "%s", fun);

	fprintf(child, "(");

	mutatation = rand()%MUTATION_FACTOR2;
	if(mutatation < MUTATION_FACTOR1) mutateVarCon(child);
	else fprintf(child, "%s", elem1);
		
	fprintf(child, ", ");

	mutatation = rand()%MUTATION_FACTOR2;
	if(mutatation < MUTATION_FACTOR1) mutateVarCon(child);
	else fprintf(child, "%s", elem2);

	fprintf(child, ");\n");
}

void mutateVar( FILE * child )
{

	char * var;
	int line;

	FILE * variables = fopen("variables.txt", "r");
	if( !variables )
	{
		perror("OPEN");
		exit(EXIT_FAILURE);
	}

	line = rand()%VARIABLES;
	skipLines(variables, line);
	fscanf(variables, "%ms", &var);

	fprintf(child, "\t%s = ", var);

	fclose(variables);
}

void mutateVarCon( FILE * child )
{
	int line;

	line = rand()%(VARIABLES+CONSTANTS);
	if( line < CONSTANTS )
	{
		double constant1;
		FILE * constants = fopen("constants.txt", "r");
		if( !constants )
		{
			perror("OPEN");
			exit(EXIT_FAILURE);
		}

		skipLines(constants, line);
		fscanf(constants, "%lf", &constant1);

		fprintf(child, "%lf", constant1);

		fclose(constants);
		return;
	}

	char * a;
	FILE * variables = fopen("variables.txt", "r");
	if( !variables )
	{
		perror("OPEN");
		exit(EXIT_FAILURE);
	}


	line = line-CONSTANTS;
	skipLines(variables, line);
	fscanf(variables, "%ms", &a);
	
	fprintf(child, "%s", a);

	fclose(variables);
}

void mutateFunc( FILE * child )
{
	char function;
	int line;

	FILE * functions = fopen("functions.txt", "r");
	if( !functions )
	{
		perror("OPEN");
		exit(EXIT_FAILURE);
	}

	line = rand()%FUNCTIONS;
	skipLines(functions, line);
	fscanf(functions, "%c", &function);

	switch(function)
	{
		case '+':
			fprintf(child, "add");
			break;
		case '-':
			fprintf(child, "sub");
			break;
		case '*':
			fprintf(child, "mul");
			break;
		case '/':
			fprintf(child, "div");
			break;
		case 's':
			fprintf(child, "sinus");
			break;
		case 'e':
			fprintf(child, "exponent");
			break;	
		case 'p':
			fprintf(child, "pow");
			break;
		default:
			fprintf(stderr, "Undefined operation %c", function);
			exit(EXIT_FAILURE);
	}

	fclose(functions);
}


void crossMutate( FILE * a, FILE * b, FILE * child, int aSize, int bSize, int aMin, int aMax, int bMin, int bMax)
{
	char * line;
	for( int i = 0; i<=HEADER_SIZE; ++i )
	{
		fscanf(a, "%m[^\n]%*c", &line);
		fprintf(child, "%s\n", line);
	}
	for( int i = 0; i<aMin; ++i )
	{
		copyLine(a, child);
	}
	skipLines(b, HEADER_SIZE+1+bMin);
	for( int i = 0; i<=bMax-bMin; ++i )
	{
		copyLine(b, child);
	}
	skipLines(a, aMax-aMin+1);
	while( fscanf(a, "%m[^\n]%*c", &line) != EOF ) 
	{
		fprintf(child, "%s\n", line);
	}
}



char reproduction( char series, int populationSize, char ** parents )
{
	char newSeries = ( series == 'a' ) ? 'b' : 'a';
	for( int i = 0; i<populationSize; i+=2 )
	{
		FILE * a = fopen(parents[i], "r");
		FILE * b = fopen(parents[i+1], "r");
		if( !a || !b )
		{
			perror("OPEN");
			exit(EXIT_FAILURE);
		}

		int aSize = 0;
		int bSize = 0;
		while( skipLines(a, 1) != EOF ) ++aSize;
		while( skipLines(b, 1) != EOF ) ++bSize;
		rewind(a);
		rewind(b);

		aSize -= (HEADER_SIZE + RETURN_SIZE + 2);
		bSize -= (HEADER_SIZE + RETURN_SIZE + 2);
		
		int aMin, aMax;
		aMin = rand()%aSize;
		do{ aMax = rand()%aSize; }while( aMin == aMax );

		if( aMin > aMax ) { int t = aMin; aMin = aMax; aMax = t; }

		int bMin, bMax;
		bMin = rand()%bSize;
		do{ bMax = rand()%bSize; }while( bMin == bMax );

		if( bMin > bMax ) { int t = bMin; bMin = bMax; bMax = t; }

		char path1[PATH_SIZE];
		char path2[PATH_SIZE];

		sprintf(path1, "%c%d.c", newSeries, i+1);
		sprintf(path2, "%c%d.c", newSeries, i+2);

		FILE * aa = fopen(path1, "w");
		FILE * bb = fopen(path2, "w");

		if( !aa || !bb )
		{
			perror("OPEN");
			exit(EXIT_FAILURE);
		}
		printf("Siema\n");

		crossMutate(a, b, aa, aSize, bSize, aMin, aMax, bMin, bMax);
		rewind(a);
		rewind(b);
		crossMutate(b, a, bb, bSize, aSize, bMin, bMax, aMin, aMax);

		fclose(aa);
		fclose(bb);
		fclose(a);
		fclose(b);	
	}
	return newSeries;	
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

		fprintf(file, "\t%s = ", var);

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
