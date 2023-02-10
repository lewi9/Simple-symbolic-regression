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
	result = pow(result, c);
	result = mul(input, input);
	a = sub(result, c);
	result = div(input, 1.000000);
	c = pow(b, result);
	input = pow(1.700000, 1.000000);
	result = mul(1.700000, input);
//e
    fprintf(output, "%lf", result);
    fclose(output);
    return 0;
}
