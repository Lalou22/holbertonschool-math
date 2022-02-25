/*
 * File: 7-division.c
 * Auth: Lalo Rdz
 */
#include "holberton.h"
/**
 * division - Function performs the division operation to c-numbers.
 * @c1: First Complex number a + ib represented by two doubles.
 * @c2: Second Complex number a + ib represented by two doubles.
 * @c3: Pointer to the third Complex number a + ib represented by two doubles.
 *
 * Description: Division of 2 complex numbers.
 * Return: Void.
 */
void division(complex c1, complex c2, complex *c3)
{
	double a = c1.re, b = c1.im, c = c2.re, d = c2.im;

	c3->re = ((a * c) + (b * d)) / ((c * c) + (d * d));
	c3->im = ((b * c) - (a * d)) / ((c * c) + (d * d));
}
