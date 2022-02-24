/*
 * File: 5-substraction.c
 * Auth: Lalo Rdz
 */
#include "holberton.h"
/**
 * substraction - Function performs the substraction operation to c-numbers.
 * @c1: First Complex number a + ib represented by two doubles.
 * @c2: Second Complex number a + ib represented by two doubles.
 * @c3: Pointer to the third Complex number a + ib represented by two doubles.
 *
 * Description: Subs real part of c1 and c2. Subs imaginary part of c1 and c2.
 * Return: Void.
 */
void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
