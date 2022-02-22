/*
 * File: 1-conjugate.c
 * Auth: Lalo Rdz
 */
#include "holberton.h"
/**
 * conjugate - Function that returns the conjugate of a given complex number.
 * @c: omplex number a + ib represented by two doubles.
 *
 * Description: Conjugate a given complex number.
 * Return: Conjugated complex number.
 */
complex conjugate(complex c)
{
	complex conj = c;

	conj.im = conj.im * -1;
	return (conj);
}
