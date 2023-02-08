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
c = div(input, 1.000000);
result = sub(0.000000, 0.000000);
b = sub(b, a);
b = pow(1.000000, a);
b = mul(result, input);
result = exponent(1.000000, 1.000000);
result = sinus(c, a);
//e
    fprintf(output, "%lf", result);
    fclose(output);
    return 0;
}
