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
	input = mul(c, 1.000000);
	input = mul(result, b);
	result = sub(a, 1.000000);
	c = mul(0.000000, result);
	result = sub(result, c);
	b = sinus(1.000000, input);
	result = sub(result, a);
	b = sinus(1.000000, input);
	result = sub(result, a);
	input = mul(c, 1.700000);
	input = sub(b, a);
	result = sub(a, 1.000000);
	result = sub(a, 1.000000);
	result = sub(result, 1.000000);
	input = mul(result, 1.700000);
	b = div(result, b);
	b = add(result, a);
	result = sub(input, 1.000000);
	input = mul(c, b);
//e
    fprintf(output, "%lf", result);
    fclose(output);
    return 0;
}
