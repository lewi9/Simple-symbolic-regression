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
	b = pow(1.000000, 0.000000);
	result = add(1.000000, b);
	result = mul(result, a);
	result = exponent(result, a);
	c = mul(b, 1.000000);
	c = mul(c, a);
	result = add(1.000000, a);
	result = exponent(result, result);
	result = add(1.000000, a);
	b = exponent(a, b);
	result = exponent(result, a);
	result = sub(result, 1.000000);
	b = pow(1.000000, 0.000000);
	result = add(1.000000, b);
	result = mul(result, a);
	result = exponent(result, a);
	b = mul(c, a);
	result = add(1.000000, result);
	result = exponent(result, a);
	result = add(1.000000, a);
	b = pow(1.000000, a);
	c = add(b, 1.000000);
	result = add(c, a);
	result = add(1.000000, a);
	result = exponent(0.000000, a);
	result = mul(c, a);
	result = add(1.000000, a);
	result = exponent(result, a);
	result = add(1.000000, a);
	b = mul(c, c);
	b = sub(result, 1.000000);
	a = pow(a, c);
	a = pow(a, c);
	b = mul(c, a);
	input = div(c, a);
	result = add(1.000000, a);
	result = exponent(result, a);
	a = pow(a, c);
	c = mul(b, 1.000000);
	a = pow(a, c);
	result = add(1.000000, result);
	c = pow(c, input);
	result = mul(result, 1.000000);
	result = add(1.000000, input);
	c = mul(b, 0.000000);
	b = mul(c, a);
	a = pow(a, c);
	result = add(1.000000, a);
	result = add(1.000000, a);
	result = add(1.000000, a);
	result = add(1.000000, a);
	b = exponent(a, b);
	result = add(result, a);
	result = add(result, a);
	result = exponent(result, a);
	result = mul(c, result);
	b = mul(c, a);
	result = add(1.000000, a);
	result = sub(result, a);
	result = mul(result, result);
	b = mul(c, a);
	a = pow(a, c);
	b = pow(c, input);
	b = mul(c, a);
	c = mul(b, c);
	b = mul(c, a);
	a = pow(a, c);
	result = add(1.000000, a);
	result = add(1.000000, input);
	b = sub(c, 1.000000);
	a = pow(a, c);
	a = add(a, c);
	b = mul(c, a);
	b = div(c, a);
	result = add(1.000000, a);
	result = exponent(result, a);
	a = pow(a, c);
	c = mul(b, c);
	a = pow(a, c);
	result = add(1.000000, result);
	c = pow(c, input);
//e
    fprintf(output, "%lf", result);
    fclose(output);
    return 0;
}
