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
c = mul(input, 1.000000);
c = add(c, 0.000000);
a = exponent(input, 0.000000);
input = mul(b, input);
b = sinus(0.000000, input);
result = add(input, c);
//e
    fprintf(output, "%lf", result);
    fclose(output);
    return 0;
}
