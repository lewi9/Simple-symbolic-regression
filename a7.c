#include <stdio.h>
#include <limits.h>
#include "functions.h"
//
int main( int argc, char * argv[] )
{
	if(argc != 2) return INT_MAX;
	double input, result, a, b, c;
	result=a=b=c=0;
	sscanf(argv[1], "%lf", &input);
	FILE * output = fopen("output.txt", "w");
	if( !output ) { perror("CHILD OPEN"); return 1; }
//s
result = sub(c, result);
input = mul(c, c);
a = mul(b, b);
c = mul(input, a);
input = sin(b);
result = exp(b);
//e
    fprintf(output, "%lf", result);
    fclose(output);
    return 0;
}
