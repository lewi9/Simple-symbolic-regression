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
	result = add(1.000000, result);
	input = div(b, c);
	input = div(b, result);
	a = div(input, input);
	result = exponent(b, 0.000000);
	c = sub(0.000000, a);
	result = add(result, result);
	c = pow(0.000000, input);
	result = add(input, 1.000000);
	b = div(input, a);
	b = sub(result, result);
	b = sinus(result, 1.000000);
	a = pow(0.000000, b);
	a = sub(1.000000, input);
	b = div(a, a);
	b = pow(b, 1.000000);
	result = mul(1.000000, result);
	c = add(0.000000, 1.000000);
	b = div(b, c);
	c = sinus(a, b);
	result = sinus(0.000000, result);
	b = exponent(a, 1.000000);
	result = sub(input, c);
	b = div(c, c);
	input = div(c, b);
	b = div(result, c);
	result = pow(b, b);
	b = exponent(b, c);
	result = sinus(b, c);
	b = sub(b, input);
	a = sub(input, input);
	input = sub(a, c);
	a = mul(0.000000, 0.000000);
	b = add(result, 1.000000);
	result = mul(input, result);
	b = pow(a, b);
	result = pow(b, a);
	b = exponent(b, c);
	result = div(input, b);
	c = exponent(c, result);
	c = sinus(1.000000, input);
	result = add(b, result);
	b = add(b, 1.000000);
	c = sub(b, 1.000000);
	b = add(a, b);
	b = div(b, b);
	result = sinus(0.000000, result);
	result = div(result, c);
	a = sinus(c, c);
	input = div(result, a);
	input = div(result, c);
	b = pow(b, c);
	input = sub(a, c);
	b = add(result, 1.000000);
	b = exponent(result, 1.000000);
	c = exponent(0.000000, 1.000000);
	b = sub(b, c);
	c = div(0.000000, 1.000000);
	c = div(1.000000, result);
	input = pow(1.000000, result);
	b = exponent(b, c);
	result = div(0.000000, a);
	b = pow(0.000000, result);
	b = exponent(1.000000, a);
	a = sub(input, c);
	input = mul(result, c);
	b = add(result, 1.000000);
	result = add(a, 1.000000);
	result = mul(1.000000, 1.000000);
	a = pow(b, b);
	input = add(c, c);
	c = pow(0.000000, result);
	c = div(a, 1.000000);
	b = div(input, c);
	result = exponent(b, c);
	c = mul(result, c);
	result = mul(b, 0.000000);
	result = exponent(0.000000, 1.000000);
	a = div(a, 0.000000);
	input = div(b, 0.000000);
	input = pow(0.000000, result);
	b = mul(input, b);
	input = add(1.000000, 1.000000);
	result = exponent(0.000000, input);
	input = add(a, 0.000000);
	input = exponent(1.000000, result);
	result = sinus(a, 0.000000);
	c = sinus(input, result);
	c = add(b, result);
	b = pow(b, 1.000000);
	c = add(0.000000, 1.000000);
	a = mul(1.000000, input);
	a = div(1.000000, c);
	c = sinus(a, 0.000000);
	result = sinus(0.000000, result);
	c = sinus(a, 0.000000);
	b = exponent(a, 1.000000);
	result = sub(input, c);
	result = div(c, c);
	input = div(1.000000, b);
	b = div(result, c);
	result = sinus(b, b);
	b = exponent(b, c);
	result = sinus(b, c);
	input = sub(a, c);
	a = sinus(c, 1.000000);
	b = mul(result, result);
	a = add(1.000000, result);
	b = exponent(1.000000, b);
	a = sub(result, result);
	c = exponent(result, a);
	c = sub(result, a);
	c = sub(1.000000, 0.000000);
	b = sub(c, c);
	a = add(1.000000, 0.000000);
	result = add(input, b);
	c = add(0.000000, 0.000000);
	result = pow(1.000000, 1.000000);
	b = add(result, 1.000000);
	input = add(b, result);
	c = exponent(c, result);
	c = sinus(c, input);
	result = add(b, result);
	b = add(b, 1.000000);
	c = sub(b, 1.000000);
	b = div(b, c);
	b = add(0.000000, b);
	c = sub(c, c);
	result = add(b, c);
	b = add(0.000000, result);
	b = exponent(0.000000, input);
	result = add(b, 1.000000);
	a = exponent(0.000000, 0.000000);
	b = add(result, 1.000000);
	result = mul(input, result);
	b = pow(a, b);
	result = pow(b, a);
	b = exponent(b, c);
	result = div(input, b);
	c = exponent(c, result);
	c = sinus(1.000000, a);
	a = exponent(1.000000, b);
	result = add(b, result);
	b = add(b, 1.000000);
	input = exponent(0.000000, a);
	c = sub(b, 1.000000);
	b = div(b, c);
	input = sinus(0.000000, result);
	result = div(result, c);
	a = sinus(c, c);
	input = div(result, a);
	a = pow(1.000000, input);
	b = div(result, c);
	b = pow(b, c);
	input = add(a, c);
	b = add(result, 1.000000);
	b = exponent(1.000000, b);
	c = div(result, b);
	c = sub(input, result);
	result = sub(0.000000, b);
	input = exponent(b, input);
	b = div(b, c);
	b = div(0.000000, a);
	c = mul(a, 1.000000);
	result = sinus(b, input);
	result = sub(b, result);
	c = exponent(input, 1.000000);
	a = exponent(result, 0.000000);
	input = sinus(result, input);
	c = sinus(a, result);
	input = add(1.000000, c);
	input = pow(b, b);
	input = add(c, 1.000000);
	input = mul(b, b);
	c = div(c, a);
	b = sub(b, c);
	result = div(b, 1.000000);
	c = sinus(b, result);
	result = add(c, result);
	b = mul(c, input);
	b = mul(b, 1.000000);
	c = add(input, c);
	a = pow(result, input);
	b = div(b, 1.000000);
	c = div(0.000000, result);
	input = div(1.000000, a);
	c = add(1.000000, input);
	a = div(b, 0.000000);
	a = pow(0.000000, b);
	b = div(a, a);
	b = div(result, 1.000000);
	c = add(1.000000, 1.000000);
	result = exponent(c, result);
	c = sinus(b, c);
	input = exponent(0.000000, a);
	b = mul(c, c);
	a = sub(input, b);
	b = div(c, c);
	a = add(c, a);
	b = div(1.000000, 1.000000);
	b = mul(c, result);
	b = mul(b, b);
	a = sinus(result, a);
	result = add(1.000000, result);
	b = sub(1.000000, 1.000000);
	b = mul(b, b);
	c = add(1.000000, 1.000000);
	a = div(1.000000, b);
	result = add(b, a);
	b = add(result, result);
	result = exponent(c, 1.000000);
	input = mul(b, input);
	input = mul(0.000000, a);
	a = exponent(input, b);
	c = add(1.000000, result);
	input = sinus(1.000000, b);
	b = pow(0.000000, 1.000000);
	input = div(b, c);
	input = add(a, c);
	input = sub(input, input);
	b = mul(b, a);
	a = sub(result, b);
	c = add(1.000000, b);
	input = exponent(b, 0.000000);
	input = mul(c, a);
	input = sinus(input, b);
	c = pow(a, 1.000000);
	b = add(b, c);
	input = div(1.000000, c);
	b = sinus(b, b);
	b = mul(b, b);
	input = mul(input, 0.000000);
	a = div(0.000000, input);
	b = sub(a, 1.000000);
	result = add(1.000000, result);
	c = sub(1.000000, 1.000000);
	a = pow(c, c);
	input = add(1.000000, 1.000000);
	input = pow(result, result);
	c = add(b, a);
	c = sub(a, 0.000000);
	b = pow(0.000000, a);
//e
    fprintf(output, "%lf", result);
    fclose(output);
    return 0;
}