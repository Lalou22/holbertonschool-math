/*
 * File: 6-multiplication.c
 * Auth: Lalo Rdz
 */
#include "holberton.h"
/**
 * multiplication - Function performs the multiplication operation to c-numbers.
 * @c1: First Complex number a + ib represented by two doubles.
 * @c2: Second Complex number a + ib represented by two doubles.
 * @c3: Pointer to the third Complex number a + ib represented by two doubles.
 *
 * Description: Multiplication of 2 complex numbers.
 * Return: Void.
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) - (c1.im * c2.im);
	c3->im = (c1.re * c2.im) + (c1.im * c2.re);
}
