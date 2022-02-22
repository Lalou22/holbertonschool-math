/*
 * File: 2-modulus.c
 * Auth: Lalo Rdz
 */
#include "holberton.h"
/**
 * modulus - Function that returns the modulus of a given complex number.
 * @c: Complex number a + ib represented by two doubles.
 *
 * Description: Calculates the modulus of a complex number.
 * Return: Modulus of a complex number (Double).
 */
double modulus(complex c)
{
	double modul;

	modul = sqrt(pow(c.re, 2) + pow(c.im, 2));
	return (modul);
}
