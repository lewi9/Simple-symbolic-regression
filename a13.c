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
	a = sub(input, a);
	a = pow(b, b);
	input = add(result, 1.000000);
	c = pow(0.000000, 1.000000);
	a = sub(input, 0.000000);
	c = sinus(0.000000, input);
	result = sub(c, result);
	result = sub(input, b);
	c = exponent(result, 1.000000);
	c = exponent(0.000000, 1.000000);
	b = sub(b, c);
	c = div(0.000000, 1.000000);
	c = div(1.000000, result);
	input = pow(1.000000, result);
	b = exponent(b, c);
	result = div(0.000000, a);
	c = pow(0.000000, result);
	b = exponent(1.000000, a);
	a = sub(input, c);
	input = mul(input, c);
	b = add(result, 1.000000);
	a = exponent(c, b);
	result = add(a, 1.000000);
	result = mul(1.000000, 1.000000);
	a = pow(b, b);
	input = add(c, c);
	c = pow(0.000000, result);
	c = div(a, 1.000000);
	b = add(0.000000, c);
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
	b = pow(a, 1.000000);
	b = mul(c, input);
	a = add(1.000000, result);
	b = add(b, c);
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
