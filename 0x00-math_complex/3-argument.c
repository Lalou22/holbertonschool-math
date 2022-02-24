/*
 * File: 3-argument.c
 * Auth: Lalo Rdz
 */
#include "holberton.h"
#include <math.h>
/**
 * argument - Function that returns the argument of a given complex number.
 * @c: Complex number a + ib represented by two doubles.
 *
 * Description: Argument of a given complex number, using arctan.
 * Return: Argument of a complex number (Double).
 */
double argument(complex c)
{
	return (atan(c.im / c.re));
}
