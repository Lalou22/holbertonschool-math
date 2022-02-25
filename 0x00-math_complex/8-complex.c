/*
 * File: 8-complex.c
 * Auth: Lalo Rdz
 */
#include "holberton.h"
#include <math.h>
/**
 * argument - Function that update a complex number modulus and arguments.
 * @m: Modulus of a given complex number.
 * @arg: Argument of a given complex number.
 * @c3: Pointer to Complex number a + ib represented by two doubles.
 *
 * Description: Function that update the real and the imaginary parts
 * of a complex number given its modulus and arguments.
 * Return: Void.
 */
void complex_from_mod_arg (double m, double arg, complex *c3)
{
	c3->re = cos(arg) * m;
	c3->im = sin(arg) * m;
}
