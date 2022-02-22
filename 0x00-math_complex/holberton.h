#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

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

#endif /* HOLBERTON_H */
