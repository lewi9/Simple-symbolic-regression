#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

#define HEADER_SIZE 9
#define RETURN_SIZE 2

#define POPULATION_SIZE 4
#define MAX_LENGTH 7

#define BUFFER_SIZE 256
#define PATH_SIZE 8

void generate( char series, int populationSize, int maxLength );

int main( int argc, char ** argv )
{
	srand(time(NULL));
	generate( 'a', POPULATION_SIZE, MAX_LENGTH );
}

void generate( char series, int populationSize, int maxLength )
{
	for( int k = 1; k<=populationSize; ++k )
	{
		int max = rand()%maxLength + 1;
		char path[PATH_SIZE];
		sprintf(path, "%c%d.txt", series, k);
		char * buff;
		FILE *header = fopen("header.txt", "r");
		FILE *ret = fopen("return.txt", "r");
		FILE *result = fopen(path, "w");
		if( !header || !ret || !result ) 
		{
			perror("OPEN");
			exit(EXIT_FAILURE);
		}

		for( int i = 0; i<HEADER_SIZE; i++ )
		{
			fscanf( header, "%m[^\n]%*c", &buff);
			fprintf( result, "%s\n", buff);
		}
		fprintf(result, "//%d\n", max);

		for( int i = 0; i<RETURN_SIZE; i++ )
		{
			fscanf( ret, "%m[^\n]%*c", &buff);
			fprintf( result, "%s\n", buff);
		}
		fclose(header);
		fclose(ret);
		fclose(result);
	}
}
