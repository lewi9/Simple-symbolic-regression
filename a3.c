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
	b = mul(a, input);
	c = div(a, input);
	b = sinus(a, c);
	result = exponent(b, c);
	input = mul(result, c);
	result = add(0.000000, result);
	a = add(0.000000, 1.000000);
	b = mul(1.000000, result);
	b = add(input, result);
	b = add(b, b);
	a = sub(1.000000, input);
	b = exponent(b, b);
	a = mul(result, result);
	c = pow(result, a);
	a = exponent(c, a);
	c = sinus(b, a);
	b = add(a, 1.000000);
	a = sub(result, result);
	b = mul(a, c);
	input = sinus(result, a);
	a = div(c, 0.000000);
	b = sub(result, result);
	result = add(1.000000, 1.000000);
	result = mul(input, input);
	a = exponent(result, c);
	b = add(0.000000, input);
	b = pow(c, c);
	b = mul(0.000000, a);
	a = exponent(result, result);
	b = sinus(result, result);
	c = sinus(input, 0.000000);
	c = sinus(a, result);
	input = mul(1.000000, c);
	b = sub(1.000000, a);
	input = div(b, b);
	input = div(input, 0.000000);
	b = add(c, b);
	input = pow(a, 0.000000);
	a = mul(1.000000, 0.000000);
	result = div(b, 1.000000);
	c = sinus(b, c);
	b = add(a, 1.000000);
	b = sub(result, result);
	b = div(a, input);
	input = sinus(result, a);
	a = exponent(result, a);
	a = add(c, 0.000000);
	b = sub(result, result);
	result = add(1.000000, 1.000000);
	input = mul(input, input);
	a = exponent(result, c);
	b = add(0.000000, input);
	b = sinus(input, c);
	b = div(0.000000, a);
	a = pow(c, c);
	b = sub(result, result);
	result = pow(0.000000, 0.000000);
	a = exponent(b, c);
	c = exponent(1.000000, c);
	c = add(input, b);
	result = sinus(a, result);
	a = div(input, input);
	result = sub(input, result);
	b = mul(c, b);
	b = add(1.000000, b);
	input = div(b, 0.000000);
	c = exponent(1.000000, result);
	b = sinus(input, input);
	result = add(input, input);
	a = add(1.000000, 1.000000);
	c = exponent(result, input);
	c = div(0.000000, input);
	a = sinus(input, b);
	b = add(result, 1.000000);
	c = pow(0.000000, 1.000000);
	b = div(b, c);
	c = div(input, 1.000000);
	b = exponent(result, c);
	a = sub(1.000000, b);
	b = div(input, c);
	b = sub(input, result);
	b = mul(b, c);
	result = add(input, 1.000000);
	b = add(input, 1.000000);
	a = add(input, 0.000000);
	result = add(a, a);
	b = div(c, c);
	b = sinus(input, 0.000000);
	b = mul(0.000000, c);
	input = add(1.000000, c);
	b = exponent(c, b);
	a = sub(input, c);
	b = div(b, c);
	input = sinus(1.000000, 0.000000);
	a = pow(1.000000, b);
	result = mul(b, 0.000000);
	b = add(c, 1.000000);
	result = exponent(1.000000, result);
	a = add(input, input);
	b = div(a, a);
	c = add(input, c);
	a = pow(result, c);
	b = sinus(b, 1.000000);
	c = div(0.000000, result);
	c = add(1.000000, input);
	a = div(b, 0.000000);
	a = pow(0.000000, input);
	c = sub(1.000000, result);
	a = mul(input, a);
	input = sinus(b, c);
	c = div(b, input);
	b = add(result, 1.000000);
	result = mul(b, result);
	input = sinus(0.000000, c);
	c = sub(0.000000, result);
	c = add(c, 1.000000);
	c = div(a, result);
	b = sub(0.000000, b);
	a = add(a, input);
	b = div(b, c);
	a = exponent(b, c);
	c = exponent(input, 1.000000);
	result = add(result, c);
	result = add(0.000000, 1.000000);
	result = add(result, result);
	result = pow(1.000000, c);
	a = mul(b, b);
	a = mul(1.000000, input);
	b = add(b, c);
	result = mul(a, result);
	b = sinus(0.000000, c);
	b = add(input, b);
	b = add(result, b);
	b = div(input, 1.000000);
	c = div(1.000000, 0.000000);
	c = pow(b, c);
	c = mul(input, result);
	b = pow(b, 1.000000);
	c = add(1.000000, 1.000000);
	a = exponent(1.000000, a);
	input = pow(input, b);
	b = exponent(c, input);
	c = exponent(c, result);
	result = exponent(c, result);
	a = sinus(b, input);
	input = div(0.000000, 1.000000);
	b = div(c, c);
	a = exponent(0.000000, b);
	b = sub(1.000000, result);
	b = exponent(a, b);
	input = add(1.000000, b);
	input = add(1.000000, c);
	b = exponent(c, b);
	result = sub(c, c);
	b = add(1.000000, input);
	b = sinus(b, result);
	a = pow(result, result);
	a = sinus(1.000000, result);
	b = div(c, c);
	b = exponent(result, 0.000000);
	a = exponent(c, 0.000000);
	b = div(b, a);
	c = sinus(0.000000, b);
	input = mul(input, c);
	c = sinus(c, result);
	result = add(b, c);
	b = add(a, a);
	c = pow(0.000000, input);
	result = add(input, 1.000000);
	b = div(a, a);
	b = sub(result, result);
	b = sinus(result, 1.000000);
	a = pow(0.000000, b);
	a = add(0.000000, input);
	c = sinus(result, 1.000000);
	c = add(result, 0.000000);
	b = div(a, a);
	b = add(result, 1.000000);
	b = div(result, 1.000000);
	c = add(1.000000, 1.000000);
	a = pow(1.000000, b);
	result = add(b, 0.000000);
	b = add(result, result);
	result = exponent(1.000000, 0.000000);
	input = mul(b, input);
	input = mul(0.000000, a);
	b = mul(a, 0.000000);
	c = div(a, input);
	b = sinus(a, c);
	result = exponent(b, c);
	input = mul(result, c);
	result = add(0.000000, result);
	a = add(0.000000, 1.000000);
	b = div(1.000000, result);
	b = add(input, result);
	b = add(b, b);
	a = sub(1.000000, result);
	b = exponent(b, b);
	a = mul(result, result);
	c = pow(result, a);
	a = exponent(c, a);
	c = sinus(1.000000, a);
	b = add(a, 1.000000);
	a = sub(result, result);
	b = mul(1.000000, c);
	input = sinus(result, a);
	a = div(c, 0.000000);
	b = sub(result, result);
	result = add(1.000000, 1.000000);
	result = mul(input, input);
	a = exponent(result, c);
	b = add(0.000000, input);
	b = sinus(c, c);
	b = mul(0.000000, a);
	a = exponent(result, c);
	b = sub(result, result);
	c = sinus(input, 0.000000);
	c = sinus(a, result);
	input = div(1.000000, c);
	b = sub(1.000000, a);
	input = div(b, b);
	input = div(input, 0.000000);
	b = add(c, b);
	input = pow(a, 0.000000);
	a = mul(1.000000, b);
	result = div(b, 1.000000);
	c = sinus(0.000000, c);
	b = add(a, 1.000000);
	b = sub(result, result);
	b = div(a, input);
	input = sinus(result, a);
	a = exponent(result, a);
	c = div(1.000000, result);
	input = pow(1.000000, result);
	b = div(b, c);
	input = div(0.000000, a);
	b = mul(a, input);
	b = pow(0.000000, b);
	b = exponent(1.000000, a);
	a = sub(input, c);
	input = mul(input, c);
	b = add(result, 1.000000);
	result = add(a, 1.000000);
	result = mul(1.000000, 1.000000);
	a = pow(b, b);
	result = add(c, c);
	c = pow(0.000000, result);
	c = div(a, 1.000000);
	b = div(a, c);
	result = exponent(b, c);
	c = add(result, c);
	result = mul(b, 0.000000);
	result = exponent(0.000000, 1.000000);
	a = div(a, 1.000000);
	b = div(b, 0.000000);
	input = pow(0.000000, result);
	input = sub(input, c);
	a = sub(1.000000, input);
	c = sinus(a, input);
	b = div(c, c);
	input = exponent(1.000000, c);
	c = add(input, 0.000000);
	b = mul(0.000000, c);
	b = pow(a, 1.000000);
	b = mul(a, input);
	a = add(1.000000, result);
	b = add(b, c);
	result = sub(0.000000, c);
	a = pow(result, a);
	c = div(b, input);
	a = exponent(1.000000, 1.000000);
	result = sub(0.000000, c);
	result = div(input, b);
	b = sub(0.000000, c);
	result = div(1.000000, 1.000000);
	result = pow(0.000000, a);
	result = add(b, result);
	b = exponent(result, c);
	a = div(1.000000, c);
	input = pow(input, c);
	result = div(1.000000, input);
	input = sinus(1.000000, 0.000000);
	b = mul(a, a);
	b = mul(input, input);
	b = sub(c, c);
	c = mul(c, 1.000000);
	c = pow(c, c);
	input = div(result, a);
	input = div(result, c);
	b = pow(b, c);
	input = sub(a, c);
	b = add(result, 1.000000);
	b = exponent(1.000000, b);
	c = div(result, b);
	input = exponent(b, input);
	b = div(b, c);
	b = div(0.000000, a);
	c = mul(input, 1.000000);
	result = sinus(b, input);
	result = sub(b, result);
	c = pow(a, result);
	a = add(b, c);
	input = div(1.000000, c);
	b = mul(b, b);
	b = mul(b, c);
	b = sub(1.000000, 1.000000);
	b = mul(b, b);
	c = add(1.000000, 1.000000);
	a = div(1.000000, b);
	result = add(b, a);
	b = add(result, result);
	result = exponent(c, 1.000000);
	input = mul(c, input);
	input = mul(0.000000, a);
	a = exponent(input, b);
	c = add(1.000000, result);
	result = div(input, b);
	c = exponent(c, result);
	c = sinus(1.000000, input);
	result = add(b, result);
	b = add(b, 1.000000);
	c = sub(b, 1.000000);
	b = div(b, c);
	input = sinus(0.000000, result);
	result = div(result, c);
	a = sinus(c, c);
	input = div(result, a);
	input = div(result, input);
	b = div(result, c);
	b = pow(b, c);
	c = add(b, c);
	b = add(result, 1.000000);
	b = sub(a, c);
	b = exponent(1.000000, b);
	c = div(result, b);
	c = sub(input, result);
	result = sub(0.000000, b);
	input = mul(b, input);
	b = div(b, c);
	b = div(0.000000, result);
	c = mul(a, 1.000000);
	result = sinus(b, input);
	result = sub(b, result);
	c = sinus(input, 1.000000);
	a = exponent(result, b);
	input = sinus(result, input);
	c = sinus(a, result);
	b = add(1.000000, c);
	input = mul(b, b);
	b = add(c, 1.000000);
	input = mul(b, b);
	b = div(a, a);
	result = exponent(0.000000, b);
	b = div(a, a);
	b = sinus(result, b);
	input = add(a, 1.000000);
	c = add(input, input);
	b = div(a, a);
	b = div(result, 1.000000);
	b = sinus(1.000000, 1.000000);
	input = add(result, b);
	c = add(1.000000, 1.000000);
	a = div(1.000000, b);
	a = mul(result, result);
	b = div(a, result);
	result = add(b, 0.000000);
	b = add(result, result);
	result = exponent(c, 1.000000);
	input = mul(b, input);
	input = mul(0.000000, a);
	a = exponent(input, b);
	c = add(1.000000, result);
	input = sinus(1.000000, b);
	b = pow(0.000000, c);
	input = div(b, c);
	c = sinus(a, c);
	b = sub(input, input);
	b = sub(b, a);
	a = sub(a, b);
	c = add(1.000000, input);
	input = div(b, c);
	input = mul(b, a);
	input = sinus(input, input);
	c = pow(a, result);
	a = add(b, c);
	input = div(1.000000, c);
	b = mul(b, b);
	b = mul(b, c);
	b = sub(1.000000, 1.000000);
	b = mul(b, b);
	b = mul(c, result);
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
	input = sub(a, c);
	input = sub(input, input);
	b = mul(b, a);
	a = sub(result, b);
	input = sinus(1.000000, b);
	b = pow(0.000000, 1.000000);
	input = div(b, c);
	input = sinus(a, c);
	input = sub(input, input);
	b = mul(b, a);
	a = sub(result, b);
	c = add(1.000000, b);
	input = exponent(result, c);
	input = exponent(b, c);
	input = mul(b, a);
	input = mul(0.000000, a);
	b = sinus(result, b);
	a = exponent(input, b);
	c = add(1.000000, result);
	input = sinus(1.000000, b);
	b = pow(0.000000, c);
	input = div(c, c);
	c = sinus(a, c);
	b = sub(input, input);
	b = sub(b, a);
	a = sub(c, b);
	b = exponent(b, 0.000000);
	c = add(1.000000, input);
	input = div(b, c);
	input = mul(c, a);
	input = sinus(input, input);
	c = pow(a, result);
	a = add(b, c);
	input = div(1.000000, c);
	b = mul(b, b);
	b = mul(b, c);
	b = sub(1.000000, 1.000000);
	b = mul(b, b);
	result = pow(0.000000, b);
	c = add(1.000000, 1.000000);
	a = div(1.000000, b);
	result = add(b, a);
	b = add(result, result);
	result = exponent(c, input);
	input = mul(b, input);
	input = mul(0.000000, a);
	a = exponent(input, b);
	c = add(1.000000, 0.000000);
	input = sinus(1.000000, b);
	b = exponent(0.000000, 1.000000);
	c = div(a, b);
	b = add(b, 1.000000);
	b = add(result, b);
	a = pow(1.000000, 0.000000);
	a = add(1.000000, 1.000000);
	input = sub(a, result);
	result = mul(1.000000, b);
	b = div(0.000000, result);
	result = sinus(result, b);
	input = mul(result, 1.000000);
	input = div(c, input);
	result = pow(0.000000, b);
	a = add(0.000000, result);
	input = add(1.000000, result);
	c = sub(a, input);
	result = exponent(result, 1.000000);
	input = add(b, result);
	a = mul(0.000000, input);
	b = mul(b, b);
	c = add(b, b);
	b = pow(0.000000, input);
	input = div(b, c);
	a = sinus(0.000000, 0.000000);
	b = add(result, result);
	b = pow(c, b);
	b = add(input, c);
	a = mul(input, 1.000000);
	a = sinus(input, input);
	b = mul(b, a);
	input = pow(a, result);
	b = add(a, 1.000000);
	c = exponent(0.000000, result);
	b = sinus(a, input);
	a = sinus(result, 1.000000);
	c = add(1.000000, input);
	c = sinus(0.000000, a);
	c = pow(b, 1.000000);
	b = div(0.000000, a);
	input = mul(b, input);
	c = sinus(result, a);
	input = mul(0.000000, a);
	a = exponent(input, b);
	c = add(1.000000, result);
	input = sinus(1.000000, b);
	input = sub(b, 0.000000);
	input = sub(a, result);
	c = exponent(0.000000, b);
	result = add(input, 1.000000);
	b = mul(0.000000, 1.000000);
	input = add(input, 0.000000);
	a = pow(c, 0.000000);
	result = add(a, a);
	result = mul(1.000000, c);
	result = pow(input, a);
	result = add(b, result);
	b = exponent(result, c);
	a = div(1.000000, input);
	input = pow(input, c);
	result = div(1.000000, input);
	input = sinus(1.000000, b);
	b = mul(a, b);
	b = mul(input, input);
	b = sub(c, c);
	input = mul(c, a);
	c = pow(b, c);
	input = sinus(a, a);
	result = exponent(b, a);
	result = sinus(c, 0.000000);
	result = sub(result, result);
	b = sub(result, 0.000000);
	result = exponent(c, input);
	input = sub(b, b);
	c = exponent(1.000000, result);
	c = add(input, b);
	result = sinus(a, result);
	a = add(input, input);
	result = add(input, result);
	b = mul(c, b);
	b = add(1.000000, b);
	input = div(b, 0.000000);
	c = exponent(1.000000, result);
	c = sinus(input, input);
	result = add(input, input);
	b = mul(1.000000, result);
	b = add(b, 1.000000);
	a = pow(1.000000, 0.000000);
	a = sub(1.000000, 1.000000);
	input = mul(c, 0.000000);
	result = add(a, 0.000000);
	input = sinus(a, result);
	c = add(0.000000, input);
	result = pow(input, 1.000000);
	b = pow(0.000000, b);
	b = add(0.000000, b);
	c = sinus(c, c);
	result = add(b, c);
	b = add(1.000000, b);
	b = exponent(0.000000, input);
	b = mul(result, result);
	a = add(1.000000, result);
	b = exponent(1.000000, b);
	a = sub(a, result);
	input = exponent(result, 0.000000);
	c = add(1.000000, 0.000000);
	a = add(1.000000, 0.000000);
	result = add(input, a);
	c = sinus(0.000000, 0.000000);
	result = pow(c, 1.000000);
	b = add(0.000000, b);
	b = exponent(a, c);
	input = mul(0.000000, 0.000000);
	c = div(b, input);
	result = sub(1.000000, result);
	b = add(b, b);
	b = mul(b, c);
	c = sub(1.000000, 0.000000);
	a = pow(0.000000, a);
	input = div(b, c);
	input = add(result, c);
	result = add(1.000000, 1.000000);
	c = exponent(0.000000, input);
	result = sinus(input, b);
	b = sub(result, 1.000000);
	c = div(0.000000, 1.000000);
	result = mul(a, c);
	b = div(b, c);
	c = div(0.000000, 1.000000);
	input = sub(1.000000, result);
	input = pow(1.000000, a);
	b = exponent(b, b);
	result = pow(0.000000, a);
	b = div(b, c);
	b = add(input, c);
	c = add(input, 1.000000);
	b = mul(a, b);
	b = mul(0.000000, result);
	a = add(result, result);
	a = div(1.000000, result);
	a = mul(result, c);
	b = sub(b, a);
	c = add(1.000000, 0.000000);
	a = exponent(c, 1.000000);
	c = sinus(b, 1.000000);
	input = mul(0.000000, b);
	result = sub(1.000000, c);
	result = pow(b, 1.000000);
	b = div(b, c);
	a = exponent(1.000000, b);
	a = mul(1.000000, input);
	b = sinus(a, a);
	a = sinus(result, 1.000000);
	a = add(1.000000, 1.000000);
	b = mul(a, b);
	result = sub(b, result);
	b = div(b, b);
	result = exponent(c, 0.000000);
	b = div(b, a);
	c = sinus(1.000000, 0.000000);
	input = mul(input, c);
	c = pow(c, result);
	result = add(b, c);
	b = exponent(a, a);
	c = exponent(0.000000, input);
	result = add(b, 1.000000);
	b = pow(a, input);
	b = add(result, 1.000000);
	result = add(input, result);
	c = div(1.000000, b);
	result = mul(0.000000, b);
	input = sinus(1.000000, b);
	result = pow(b, a);
	c = pow(result, input);
	c = pow(1.000000, 1.000000);
	input = add(1.000000, a);
	c = pow(result, c);
	a = pow(1.000000, b);
	result = exponent(b, 0.000000);
	result = exponent(b, 1.000000);
	b = add(a, b);
	input = exponent(result, c);
	result = sub(1.000000, result);
	input = pow(c, result);
	a = exponent(result, c);
	b = mul(b, c);
	c = exponent(1.000000, 0.000000);
	result = div(result, a);
	input = div(0.000000, c);
	b = add(b, c);
	c = add(1.000000, 1.000000);
	c = sub(b, result);
	a = pow(1.000000, b);
	b = add(result, 0.000000);
	c = exponent(a, input);
	b = div(0.000000, result);
	b = div(b, result);
	a = pow(result, c);
	result = sinus(1.000000, result);
	b = add(c, c);
	b = exponent(result, c);
	b = div(result, c);
	a = add(result, input);
	a = div(0.000000, a);
	c = mul(input, a);
	result = pow(a, c);
	result = exponent(0.000000, input);
	result = sinus(b, result);
	c = exponent(input, 1.000000);
	a = mul(result, b);
	c = sinus(a, result);
	result = add(1.000000, c);
	input = exponent(1.000000, c);
	b = sub(1.000000, a);
	input = div(b, b);
	input = div(input, 0.000000);
	b = sub(result, result);
	b = add(c, b);
	input = pow(a, 0.000000);
	b = exponent(c, 1.000000);
	a = mul(b, b);
	result = div(b, 0.000000);
	a = sinus(b, result);
	b = add(a, 1.000000);
	b = sub(b, result);
	a = exponent(result, 1.000000);
	b = sinus(a, a);
	a = add(b, input);
	b = div(a, c);
	b = div(input, 1.000000);
	c = add(input, 1.000000);
	a = pow(1.000000, b);
	result = mul(b, 0.000000);
	result = sub(0.000000, b);
	b = mul(input, result);
	input = add(1.000000, 0.000000);
	b = add(result, result);
	result = exponent(c, result);
	input = div(b, c);
	b = mul(a, b);
	a = mul(a, c);
	input = exponent(0.000000, a);
	input = add(c, c);
	a = sub(a, b);
	input = add(b, c);
	b = div(1.000000, 1.000000);
	c = add(b, result);
	b = mul(b, b);
	a = div(input, input);
	result = mul(b, 1.000000);
	c = div(a, input);
	c = sub(0.000000, a);
	b = add(result, result);
	a = sinus(input, 1.000000);
	a = sub(1.000000, input);
	c = sinus(a, input);
	b = div(c, c);
	c = exponent(1.000000, c);
	c = add(b, 0.000000);
	b = div(0.000000, c);
	b = pow(a, 1.000000);
	b = mul(a, input);
	a = add(1.000000, result);
	b = exponent(b, c);
	result = sub(0.000000, c);
	a = exponent(1.000000, a);
	result = sub(0.000000, c);
	input = pow(a, 0.000000);
	result = exponent(input, b);
	b = sub(0.000000, input);
	result = pow(0.000000, a);
	result = add(b, b);
	input = mul(b, input);
	b = exponent(result, c);
	a = div(1.000000, input);
	input = pow(0.000000, c);
	result = div(1.000000, input);
	input = sinus(1.000000, 0.000000);
	b = mul(a, b);
	b = mul(input, input);
	input = sinus(1.000000, 1.000000);
	b = sub(c, c);
	c = mul(c, a);
	c = pow(b, c);
	input = sinus(a, a);
	result = exponent(0.000000, a);
	result = sub(result, result);
	b = sub(result, 0.000000);
	result = exponent(c, input);
	input = exponent(1.000000, result);
	c = mul(input, b);
	result = sinus(a, result);
	a = div(input, input);
	b = sub(a, a);
	input = div(b, c);
	b = mul(0.000000, a);
	input = sub(input, b);
	result = pow(a, input);
	c = add(input, result);
	input = div(b, c);
	a = pow(result, input);
	input = add(result, input);
	c = div(result, 0.000000);
	input = exponent(c, result);
	c = mul(a, input);
	c = sub(c, 0.000000);
	input = add(1.000000, c);
	b = exponent(b, b);
	a = sub(input, a);
	a = pow(b, b);
	input = add(result, 1.000000);
	c = pow(0.000000, result);
	a = sub(input, 0.000000);
	c = sinus(0.000000, input);
	result = sub(c, result);
	result = sub(c, b);
	b = exponent(result, 1.000000);
	c = exponent(0.000000, 1.000000);
	b = sub(b, c);
	c = div(0.000000, 1.000000);
	c = div(1.000000, result);
	c = sub(a, 1.000000);
	input = pow(1.000000, result);
	b = exponent(b, c);
	result = div(0.000000, a);
	c = pow(0.000000, result);
	b = exponent(1.000000, a);
	a = sub(input, c);
	input = mul(input, c);
	b = add(result, 1.000000);
	result = add(a, 1.000000);
	result = mul(1.000000, 1.000000);
	a = pow(b, b);
	input = add(c, c);
	c = pow(0.000000, result);
	c = div(a, 1.000000);
	b = div(0.000000, c);
	input = exponent(b, c);
	c = add(result, c);
	result = mul(b, 0.000000);
	result = exponent(0.000000, 1.000000);
	a = div(a, 0.000000);
	input = div(b, 0.000000);
	input = pow(0.000000, result);
	input = sub(input, c);
	a = sub(1.000000, input);
	c = pow(a, input);
	b = div(c, c);
	input = exponent(1.000000, c);
	c = add(input, 0.000000);
	input = sinus(input, 0.000000);
	b = div(0.000000, c);
	b = exponent(a, 1.000000);
	b = pow(a, input);
	a = add(1.000000, result);
	b = add(b, c);
	result = sub(0.000000, c);
	input = exponent(1.000000, a);
	input = add(a, 1.000000);
	c = add(input, input);
	input = div(c, c);
	b = div(a, result);
	b = div(1.000000, 1.000000);
	b = sinus(1.000000, 1.000000);
	input = add(result, b);
	c = add(1.000000, 1.000000);
	a = div(1.000000, b);
	b = div(a, result);
	result = add(b, 0.000000);
	b = add(result, result);
	result = exponent(c, 1.000000);
	input = mul(b, input);
	a = exponent(input, b);
	c = add(1.000000, result);
	input = sinus(1.000000, b);
	input = sub(b, 0.000000);
	input = sub(a, result);
	input = mul(input, a);
	c = exponent(0.000000, b);
	result = add(input, 1.000000);
	b = mul(0.000000, 1.000000);
	input = add(input, 0.000000);
	a = pow(c, 0.000000);
	result = add(a, a);
	result = pow(input, a);
	result = add(b, result);
	b = exponent(result, c);
	a = div(1.000000, input);
	input = pow(input, c);
	result = div(1.000000, input);
	input = sinus(1.000000, 0.000000);
	b = mul(b, b);
	b = mul(input, input);
	b = sub(c, c);
	c = mul(c, a);
	c = pow(b, c);
	input = sinus(a, a);
	result = exponent(0.000000, a);
	input = sub(result, result);
	b = sub(result, 0.000000);
	result = exponent(c, input);
	c = add(0.000000, input);
	result = pow(input, 1.000000);
	b = pow(0.000000, b);
	b = add(0.000000, b);
	input = exponent(input, input);
	b = pow(a, a);
	b = add(result, input);
	c = add(1.000000, 1.000000);
	a = pow(1.000000, b);
	result = add(b, 0.000000);
	b = add(result, result);
	input = exponent(1.000000, 1.000000);
	a = add(1.000000, input);
	b = div(a, a);
	c = sinus(1.000000, result);
	b = div(result, 1.000000);
	result = exponent(c, result);
	c = add(a, input);
	result = pow(result, 0.000000);
	b = sub(a, a);
	a = mul(b, b);
	a = sinus(1.000000, input);
	result = mul(1.000000, result);
	b = add(b, c);
	b = sinus(c, c);
	b = add(input, result);
	b = add(result, b);
	b = div(input, 1.000000);
	input = pow(0.000000, result);
	input = sub(input, a);
	c = pow(c, c);
	b = mul(b, b);
	c = add(1.000000, 1.000000);
	a = div(1.000000, b);
	result = add(b, a);
	b = add(result, result);
	result = exponent(c, 1.000000);
	input = mul(b, input);
	input = mul(0.000000, a);
	a = add(0.000000, b);
	a = exponent(input, b);
	c = add(1.000000, result);
	input = sinus(1.000000, c);
	b = pow(0.000000, 1.000000);
	input = div(b, c);
	input = add(a, c);
	input = sub(input, input);
	b = mul(b, a);
	b = sinus(0.000000, c);
	a = sub(result, b);
	c = add(1.000000, b);
	input = exponent(b, c);
	input = mul(c, a);
	c = add(0.000000, result);
	input = sinus(input, b);
	c = pow(a, 1.000000);
	b = add(b, c);
	input = div(result, c);
	b = div(b, b);
	b = mul(b, b);
	a = exponent(0.000000, input);
	b = sub(a, 1.000000);
	c = pow(input, result);
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