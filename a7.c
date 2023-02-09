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
	b = div(b, a);
	input = exponent(input, result);
	result = sub(b, result);
	a = div(1.000000, a);
	a = mul(result, c);
	b = sub(b, a);
	c = add(1.000000, 0.000000);
	a = exponent(a, 1.000000);
	input = mul(0.000000, b);
	input = sub(a, result);
	result = add(1.000000, b);
	b = div(0.000000, result);
	result = sinus(result, b);
	input = mul(0.000000, 1.000000);
	input = div(c, input);
	result = pow(0.000000, b);
	b = add(0.000000, result);
	input = add(1.000000, result);
	c = sub(a, input);
	result = add(b, result);
	a = mul(result, input);
	b = mul(b, b);
	c = add(b, b);
	result = pow(0.000000, input);
	input = div(input, c);
	a = sinus(c, 0.000000);
	b = add(result, c);
	b = sub(c, b);
	b = add(a, c);
	a = mul(input, 1.000000);
	a = sinus(input, input);
	input = sinus(a, a);
	b = mul(b, a);
	input = pow(a, result);
	b = add(a, 1.000000);
	c = exponent(0.000000, result);
	b = sinus(a, input);
	b = sinus(result, 1.000000);
	c = add(1.000000, input);
	c = sinus(a, b);
	c = pow(b, a);
	b = div(a, a);
	b = sinus(result, b);
	result = pow(c, result);
	b = div(input, c);
	a = mul(1.000000, a);
	input = sub(b, 0.000000);
	c = sinus(input, result);
	a = sinus(c, b);
	b = sub(1.000000, input);
	b = div(1.000000, c);
	c = div(input, b);
	b = sub(1.000000, input);
	a = exponent(1.000000, c);
	c = pow(0.000000, result);
	input = exponent(c, 0.000000);
	b = mul(b, input);
	input = mul(0.000000, a);
	b = div(input, input);
	result = mul(b, 0.000000);
	c = sub(0.000000, a);
	b = exponent(0.000000, b);
	a = sub(input, a);
	a = pow(b, b);
	input = add(a, 1.000000);
	c = pow(0.000000, result);
	a = sub(input, 0.000000);
	c = sinus(0.000000, input);
	result = sub(c, result);
	result = sub(input, b);
	b = exponent(1.000000, b);
	c = div(result, b);
	input = exponent(b, input);
	b = div(b, c);
	b = div(0.000000, a);
	c = mul(input, 1.000000);
	result = sinus(b, input);
	b = sub(b, result);
	c = pow(a, result);
	a = add(b, c);
	input = div(1.000000, c);
	b = mul(b, b);
	b = mul(b, c);
	input = add(1.000000, 1.000000);
	input = pow(input, input);
	c = add(b, a);
	c = sub(a, 0.000000);
	b = pow(0.000000, a);
//e
    fprintf(output, "%lf", result);
    fclose(output);
    return 0;
}
