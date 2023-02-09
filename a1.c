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
	input = exponent(input, 0.000000);
	result = sub(b, result);
	a = pow(b, input);
	b = pow(result, 1.000000);
	input = pow(c, 1.000000);
	b = add(input, 1.000000);
	result = sinus(c, result);
	c = add(1.000000, 1.000000);
	b = div(c, b);
	result = mul(b, input);
	a = mul(result, 0.000000);
	c = exponent(result, c);
	b = add(1.000000, result);
	b = add(a, a);
	result = sinus(c, 0.000000);
	result = sinus(result, result);
	a = add(a, c);
	c = div(1.000000, a);
	result = add(c, 0.000000);
	a = sub(a, input);
	b = sub(b, 1.000000);
	result = sinus(1.000000, result);
	c = sinus(1.000000, input);
	a = add(b, result);
	a = sub(b, result);
	b = sinus(result, 1.000000);
	result = sub(c, input);
	a = div(b, 1.000000);
	a = add(b, result);
	a = div(b, result);
	input = exponent(input, a);
	result = mul(b, c);
	b = div(a, 1.000000);
	a = sub(result, c);
	result = pow(b, result);
	c = add(1.000000, result);
	b = pow(result, c);
	b = add(1.000000, 1.000000);
	result = sub(result, c);
	c = exponent(0.000000, 0.000000);
	a = sinus(a, b);
	b = mul(input, input);
	c = div(0.000000, result);
	a = exponent(input, b);
	a = add(0.000000, 1.000000);
	b = pow(input, input);
	a = sub(result, result);
	c = add(b, c);
	result = pow(a, result);
	a = mul(1.000000, input);
	a = exponent(1.000000, c);
	a = pow(input, 1.000000);
	c = add(a, b);
	a = add(c, 0.000000);
	result = exponent(input, input);
	b = add(result, 1.000000);
	c = mul(1.000000, result);
	b = add(1.000000, c);
	result = exponent(0.000000, a);
	c = div(a, result);
	b = div(a, c);
	result = exponent(b, c);
	c = add(1.000000, c);
	a = div(0.000000, 1.000000);
	b = div(input, c);
	a = add(a, result);
	input = pow(0.000000, result);
	input = sub(input, input);
	c = div(c, c);
	result = add(result, c);
	result = sinus(a, c);
	b = add(a, result);
	a = exponent(b, c);
	c = exponent(c, input);
	input = pow(0.000000, result);
	b = pow(1.000000, b);
	b = sub(result, result);
	b = div(result, c);
	a = add(b, result);
	result = mul(b, 0.000000);
	b = mul(b, c);
	b = div(c, b);
	result = mul(b, input);
	a = mul(result, 0.000000);
	input = mul(0.000000, a);
	c = exponent(result, c);
	b = add(1.000000, result);
	b = add(a, a);
	c = sinus(c, 0.000000);
	result = div(result, result);
	a = add(a, c);
	c = div(1.000000, a);
	a = sub(a, input);
	result = sinus(input, result);
	c = sinus(1.000000, input);
	a = add(b, result);
	a = sub(b, result);
	b = sinus(result, 1.000000);
	result = sub(result, input);
	a = div(b, 1.000000);
	result = add(0.000000, result);
	a = add(b, result);
	a = div(b, input);
	input = pow(input, a);
	result = mul(0.000000, c);
	b = div(a, 1.000000);
	a = sub(result, c);
	result = pow(b, result);
	c = add(1.000000, result);
	b = pow(result, c);
	b = add(1.000000, 1.000000);
	result = sub(result, c);
	c = exponent(0.000000, 0.000000);
	b = mul(input, input);
	a = div(0.000000, result);
	a = exponent(input, b);
	a = add(a, 1.000000);
	b = pow(input, input);
	a = sub(result, result);
	c = add(c, c);
	result = pow(a, result);
	a = mul(1.000000, input);
	a = exponent(1.000000, c);
	a = pow(input, 1.000000);
	result = add(input, b);
	c = add(0.000000, 0.000000);
	c = sub(input, c);
	input = pow(c, 1.000000);
	result = add(1.000000, b);
	a = div(a, input);
	c = exponent(0.000000, result);
	b = pow(result, a);
	b = sinus(c, result);
	input = add(b, result);
	c = sinus(input, a);
	a = exponent(1.000000, b);
	input = mul(b, b);
	result = div(b, 1.000000);
	c = sinus(b, result);
	b = pow(0.000000, b);
	b = mul(result, c);
	b = mul(c, c);
	b = sinus(1.000000, result);
	b = add(result, result);
	b = add(b, b);
	a = sub(1.000000, result);
	b = exponent(1.000000, b);
	a = mul(result, result);
	c = pow(result, a);
	b = div(b, c);
	result = sinus(input, result);
	result = sub(result, c);
	b = div(c, c);
	input = mul(1.000000, c);
	b = pow(result, c);
	b = exponent(b, c);
	input = sub(0.000000, c);
	input = mul(result, result);
	result = sub(b, result);
	b = exponent(1.000000, b);
	a = sub(result, c);
	c = exponent(result, a);
	c = add(1.000000, 0.000000);
	a = add(1.000000, 0.000000);
	result = add(input, b);
	c = add(0.000000, 0.000000);
	c = sub(input, c);
	input = pow(c, 1.000000);
	b = add(0.000000, b);
	b = exponent(a, 1.000000);
	c = div(b, result);
	result = sub(1.000000, result);
	c = add(b, result);
	b = mul(b, result);
	c = sub(1.000000, c);
	input = div(result, c);
	input = add(result, 0.000000);
	c = sub(a, b);
	result = add(1.000000, 1.000000);
	input = sinus(input, c);
	c = pow(a, 1.000000);
	b = add(b, c);
	input = sub(1.000000, c);
	input = add(result, b);
	c = add(1.000000, result);
	a = div(b, input);
	input = sinus(input, c);
	b = sinus(c, result);
	input = add(b, result);
	c = sub(0.000000, c);
	a = exponent(result, input);
	a = mul(b, b);
	c = div(b, a);
	b = mul(1.000000, result);
	result = div(b, 1.000000);
	result = div(b, 0.000000);
	c = sinus(result, result);
	b = mul(b, c);
	b = mul(result, input);
	b = mul(c, 0.000000);
	b = mul(b, b);
	c = sub(b, 1.000000);
	result = pow(1.000000, 0.000000);
	input = mul(1.000000, b);
	input = exponent(input, input);
	b = pow(a, a);
	a = add(result, input);
	c = add(1.000000, 1.000000);
	a = pow(1.000000, b);
	result = add(b, 0.000000);
	b = add(result, result);
	input = exponent(1.000000, 1.000000);
	input = exponent(c, 0.000000);
	b = mul(b, input);
	input = mul(0.000000, a);
	b = div(input, input);
	result = mul(b, 0.000000);
	a = sub(1.000000, input);
	b = div(b, c);
	input = exponent(1.000000, c);
	c = add(input, 0.000000);
	input = div(c, b);
	b = div(result, c);
	result = pow(b, b);
	b = exponent(b, c);
	a = add(b, c);
	input = sub(a, c);
	b = mul(result, result);
	a = add(1.000000, result);
	b = exponent(1.000000, b);
	input = pow(input, b);
	result = sinus(b, 1.000000);
	a = sub(result, result);
	c = exponent(result, a);
	c = add(1.000000, 0.000000);
	a = add(1.000000, 0.000000);
	result = add(input, b);
	c = add(0.000000, 0.000000);
	result = exponent(c, 1.000000);
	b = add(0.000000, b);
	b = exponent(a, c);
	b = mul(0.000000, 1.000000);
	a = div(b, result);
	result = sub(1.000000, result);
	a = sinus(0.000000, b);
	b = add(b, result);
	b = mul(b, c);
	c = sub(1.000000, 0.000000);
	result = div(input, 1.000000);
	result = exponent(b, c);
	c = add(result, c);
	result = mul(c, 0.000000);
	result = exponent(0.000000, 1.000000);
	a = div(0.000000, 0.000000);
	b = div(b, 0.000000);
	input = pow(0.000000, result);
	a = sub(input, c);
	a = sub(1.000000, input);
	b = div(c, c);
	input = exponent(1.000000, 1.000000);
	c = add(input, 0.000000);
	b = div(0.000000, 0.000000);
	b = pow(a, 1.000000);
	c = mul(input, b);
	b = mul(a, input);
	c = add(a, result);
	c = pow(a, 0.000000);
	b = div(c, c);
	c = exponent(result, c);
	b = sub(0.000000, b);
	b = div(input, c);
	input = sinus(b, a);
	b = exponent(b, c);
	a = sub(result, input);
	b = div(result, b);
	input = add(1.000000, c);
	c = sinus(c, 1.000000);
	result = div(1.000000, 0.000000);
	b = mul(result, a);
	b = mul(result, 0.000000);
	result = mul(result, b);
	a = sinus(a, result);
	a = div(1.000000, c);
	a = add(b, result);
	result = mul(b, 0.000000);
	b = mul(b, c);
	b = div(c, b);
	result = mul(b, input);
	a = pow(result, 0.000000);
	c = exponent(result, c);
	b = add(1.000000, result);
	b = add(a, a);
	result = sinus(c, 0.000000);
	result = sinus(result, result);
	a = add(a, c);
	c = div(1.000000, a);
	result = add(c, 0.000000);
	a = sub(a, input);
	result = sinus(1.000000, result);
	c = sinus(1.000000, input);
	a = add(b, result);
	a = sub(b, result);
	b = sinus(result, 1.000000);
	result = sub(result, input);
	result = div(b, 1.000000);
	a = add(b, result);
	a = div(b, result);
	input = exponent(input, a);
	result = mul(b, c);
	b = div(a, 1.000000);
	a = sub(result, c);
	result = pow(b, result);
	c = add(1.000000, result);
	result = pow(result, c);
	b = add(1.000000, 1.000000);
	result = sub(result, c);
	c = exponent(0.000000, 0.000000);
	a = sinus(a, b);
	result = mul(input, input);
	c = div(0.000000, result);
	a = exponent(input, b);
	a = add(0.000000, 1.000000);
	b = pow(input, input);
	a = sub(result, result);
	c = add(b, c);
	b = exponent(result, c);
	result = pow(result, result);
	a = mul(1.000000, input);
	a = div(1.000000, input);
	input = pow(input, c);
	result = div(1.000000, input);
	input = sinus(1.000000, 0.000000);
	b = mul(a, result);
	b = mul(a, input);
	b = sub(c, c);
	c = mul(c, 1.000000);
	c = sinus(result, 0.000000);
	c = pow(b, result);
	input = sinus(a, a);
	result = exponent(0.000000, a);
	result = sub(result, result);
	b = sub(result, 0.000000);
	result = exponent(c, input);
	c = exponent(1.000000, result);
	result = pow(1.000000, input);
	result = mul(result, result);
	input = exponent(result, input);
	c = exponent(0.000000, result);
	input = sub(0.000000, 0.000000);
	c = div(result, c);
	input = div(0.000000, a);
	result = div(c, c);
	b = exponent(a, a);
	result = sub(b, result);
	result = exponent(input, 1.000000);
	a = div(result, b);
	c = sinus(a, result);
	input = div(1.000000, c);
	input = div(b, b);
	input = add(c, 1.000000);
	c = pow(a, c);
	b = mul(c, 1.000000);
	result = div(b, 1.000000);
	input = mul(input, result);
	c = sinus(b, result);
	b = add(result, 1.000000);
	b = sub(input, a);
	result = sinus(a, 1.000000);
	a = add(1.000000, input);
	b = div(a, a);
	b = div(result, 1.000000);
	result = exponent(c, result);
	c = add(a, input);
	result = pow(result, 0.000000);
	b = sub(a, a);
	a = mul(b, b);
	a = sinus(1.000000, input);
	result = mul(1.000000, result);
	b = add(b, input);
	b = sinus(c, c);
	b = add(input, result);
	b = add(result, b);
	b = div(input, 1.000000);
	input = pow(0.000000, result);
	input = sub(input, a);
	c = pow(c, c);
	input = exponent(1.000000, a);
	b = div(b, 1.000000);
	a = mul(input, input);
	b = div(b, a);
	c = add(result, c);
	result = exponent(input, a);
	input = mul(1.000000, c);
	result = add(c, 0.000000);
	result = exponent(0.000000, 1.000000);
	a = pow(result, c);
	a = div(a, 0.000000);
	b = div(b, 0.000000);
	input = mul(0.000000, 0.000000);
	input = sub(input, c);
	b = add(input, result);
	a = sub(1.000000, input);
	b = pow(result, result);
	result = add(1.000000, 1.000000);
	result = mul(input, input);
	a = exponent(result, c);
	b = add(0.000000, a);
	b = pow(c, c);
	b = mul(0.000000, a);
	a = exponent(result, c);
	b = sub(result, result);
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
	a = exponent(result, b);
	input = add(c, 0.000000);
	b = sub(result, result);
	result = add(1.000000, 1.000000);
	input = mul(input, input);
	a = exponent(result, c);
	b = add(0.000000, input);
	b = sinus(input, c);
	b = mul(0.000000, a);
	a = pow(c, c);
	b = sub(result, result);
	result = pow(0.000000, 0.000000);
	a = exponent(b, c);
	c = exponent(1.000000, c);
	c = add(input, b);
	result = sinus(a, result);
	a = div(input, input);
	result = add(input, result);
	b = mul(c, b);
	b = add(1.000000, b);
	input = div(b, 0.000000);
	c = exponent(1.000000, result);
	c = sinus(input, input);
	result = add(input, input);
	b = add(b, 1.000000);
	b = div(result, 1.000000);
	b = add(1.000000, 1.000000);
	c = add(1.000000, 1.000000);
	a = div(c, b);
	b = div(a, result);
	c = add(b, 0.000000);
	b = add(result, result);
	result = exponent(c, 1.000000);
	input = mul(b, input);
	c = mul(0.000000, a);
	c = mul(a, a);
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
	c = add(1.000000, input);
	a = div(b, 0.000000);
	a = pow(0.000000, b);
	b = div(a, a);
	b = div(result, 1.000000);
	c = add(1.000000, 1.000000);
	result = exponent(c, result);
	input = sinus(c, c);
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
	c = sub(1.000000, 0.000000);
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