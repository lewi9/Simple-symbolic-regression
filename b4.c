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
	a = mul(b, a);
	a = exponent(c, input);
	a = mul(c, result);
	c = exponent(0.000000, result);
	result = mul(1.000000, a);
	result = mul(1.000000, a);
	result = exponent(1.000000, b);
    fprintf(output, "%lf", result);
    fclose(output);
    return 0;
}
