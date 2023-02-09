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
	result = mul(1.000000, a);
	input = add(a, result);
	c = exponent(b, 1.000000);
	a = pow(1.000000, input);
    fprintf(output, "%lf", result);
    fclose(output);
    return 0;
}
