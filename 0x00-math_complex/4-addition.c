/*
 * File: 4-addition.c
 * Auth: Lalo Rdz
 */
#include "holberton.h"
/**
 * modulus - Function that performs the addition operation to complex numbers.
 * @c1: First Complex number a + ib represented by two doubles.
 * @c2: Second Complex number a + ib represented by two doubles.
 * @c3: Pointer to the third Complex number a + ib represented by two doubles.
 *
 * Description: Sums real part of c1 and c2. Sums imaginary part of c1 and c2.
 * Return: Void.
 */
void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.re;
	c3->im = c1.im + c2.im;
}
