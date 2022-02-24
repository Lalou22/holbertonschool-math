#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <math.h>

/**
 * struct complex - Represents a complex number (Real part + imaginary part).
 * @re: Real part of the complex number.
 * @im: Imaginary part of the complex number.
 */
typedef struct complex
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);

#endif /* HOLBERTON_H */
