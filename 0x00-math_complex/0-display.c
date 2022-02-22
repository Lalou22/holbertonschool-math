/*
 * File: 0-display.c
 * Auth: Lalo Rdz
 */
#include "holberton.h"
/**
 * display_complex_number - Displays a complex number.
 * @c: omplex number a + ib represented by two doubles.
 *
 * Description: displays the complex numbers, followed by a new line.
 * Return: Void.
 */
void display_complex_number(complex c)
{
	double im = c.im;

	printf("%f", c.re);
	if (c.im != 0.0)
	{
		if (c.im < 0)
		{
			printf(" - ");
			im = im * -1;
		}
		else
		{
			printf(" + ");
		}
		if (im != 1)
			printf("%f", im);
		printf("i");
	}
	printf("\n");
}
