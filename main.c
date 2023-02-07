#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

#define HEADER_SIZE 9
#define RETURN_SIZE 2

#define CONSTANTS 2
#define VARIABLES 5
#define FUNCTIONS 3

#define POPULATION_SIZE 4
#define MAX_LENGTH 7

#define BUFFER_SIZE 256
#define PATH_SIZE 6

void generatePopulation( char series, int populationSize, int maxLength );
void generateProg( FILE * file, int lines );
void skipLines( FILE * file, int lines ) { while( lines-- > 0 ) fscanf(file, "%*[^\n]\n"); } 

int main( int argc, char ** argv )
{
	char series = 'a';
	srand(time(NULL));
	generatePopulation( series, POPULATION_SIZE, MAX_LENGTH );
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
		char * a;
		char * b;
		char * function;
		int flagC1 = 0;
		int flagC2 = 0;
		int constant1;
		int constant2;
	
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
			fscanf(constants, "%d", &constant1);
			rewind(constants);
			flagC1 = 1;
		}
		else
		{
			line = line-CONSTANTS;
			skipLines(variables, line);
			fscanf(variables, "%ms", &a);
			rewind(variables);
		}

		line = rand()%(VARIABLES+CONSTANTS);
		if( line < CONSTANTS )
		{
			skipLines(constants, line);
			fscanf(constants, "%d", &constant2);
			rewind(constants);
			flagC2 = 1;
		}
		else
		{
			line = line-CONSTANTS;
			skipLines(variables, line);
			fscanf(variables, "%ms", &b);
			rewind(variables);
		}

		line = rand()%FUNCTIONS;
		skipLines(functions, line);
		fscanf(functions, "%ms", &function);
	       	rewind(functions);	

		if( flagC1 && flagC2 ) 
		{
			fprintf(file, "\t%s = %d %s %d;\n", var, constant1, function, constant2);
			continue;
		}
		if( flagC1 )
		{
			fprintf(file, "\t%s = %d %s %s;\n", var, constant1, function, b);
			continue;
		}
		if( flagC2 )
		{
			fprintf(file, "\t%s = %s %s %d;\n", var, a, function, constant2);
			continue;
		}
		fprintf(file, "\t%s = %s %s %s;\n", var, a, function, b);
	}

	fprintf(file, "//e\n");
	fclose(variables);
	fclose(constants);
	fclose(functions);
}
