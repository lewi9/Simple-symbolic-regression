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
b = div(1.000000, input);
a = sinus(a, a);
result = pow(input, b);
a = pow(0.000000, a);
b = div(c, result);
result = pow(input, a);
//e
    fprintf(output, "%lf", result);
    fclose(output);
    return 0;
}
