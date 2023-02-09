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
	c = add(1.000000, b);
	c = add(1.000000, result);
	b = mul(b, c);
	b = add(result, 1.000000);
	b = pow(0.000000, a);
	result = add(b, result);
	result = add(b, result);
	result = exponent(a, c);
	b = add(result, 1.000000);
	result = sub(1.000000, result);
	b = add(result, 1.000000);
	c = add(1.000000, 1.000000);
	result = add(1.000000, result);
	result = pow(input, 1.000000);
	b = div(b, c);
	c = sinus(input, result);
	b = mul(0.000000, a);
	b = pow(0.000000, a);
	result = add(b, result);
	b = div(b, c);
	result = pow(0.000000, a);
	result = add(b, result);
	b = pow(0.000000, a);
	result = add(b, result);
	b = add(result, 1.000000);
	b = add(result, 1.000000);
	b = pow(0.000000, a);
	result = add(b, result);
	result = add(b, result);
	result = exponent(a, c);
	b = add(result, 1.000000);
	result = exponent(1.000000, result);
	b = add(result, 1.000000);
	b = pow(0.000000, a);
	result = add(b, result);
	b = add(result, 1.000000);
	result = add(1.000000, result);
	b = div(c, c);
	b = add(result, 1.000000);
	c = add(1.000000, result);
	b = div(b, c);
	b = add(result, 1.000000);
	result = sub(1.000000, result);
	result = pow(input, 1.000000);
	c = sinus(input, result);
	b = mul(0.000000, a);
	b = sinus(result, c);
	a = sub(result, result);
	c = add(1.000000, result);
	b = div(b, c);
	b = add(result, 1.000000);
	result = sub(1.000000, result);
	result = pow(input, 1.000000);
	result = add(1.000000, result);
	result = pow(input, result);
	b = div(b, c);
	result = pow(input, 1.000000);
	result = add(1.000000, result);
	result = add(1.000000, result);
	result = add(b, result);
	result = add(b, result);
	b = div(b, c);
	result = add(1.000000, result);
	c = sub(1.000000, 0.000000);
	input = pow(input, result);
	b = exponent(b, c);
	b = div(b, c);
	b = mul(b, b);
	b = pow(0.000000, a);
	result = add(1.000000, result);
	input = pow(input, result);
	b = exponent(b, c);
	b = div(a, c);
	result = mul(1.000000, result);
	c = add(0.000000, b);
	b = sinus(b, c);
	b = div(b, c);
	b = mul(b, b);
	result = add(1.000000, result);
	c = sub(a, 0.000000);
	b = pow(0.000000, a);
//e
    fprintf(output, "%lf", result);
    fclose(output);
    return 0;
}
