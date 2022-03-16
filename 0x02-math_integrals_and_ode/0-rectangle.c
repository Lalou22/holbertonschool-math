/*
 * File: 0-rectangle.c
 * Auth: Lalo Rdz
 */
#include "rectangle.h"
double eval(double point);
/**
 * rectangle_method - Function that evaluates an integral using a Numeric
 * approach.
 * @a: Lower limit.
 * @b: Upper limit.
 * @steps: Steps used for the approximation.
 *
 * Description: Function loops from a to b, n-steps times.
 * Return: Integral value approximation.
 */
double rectangle_method(double a, double b, int steps)
{
	double delta, aux = 0.0;
	int i;

	delta = (b - a) / steps;
	for (i = 0; i < steps; i++)
	{
		aux += (eval(a + (i * delta))) / steps;
	}
	return (aux);
}
/**
 * eval - Function that evaluates a math function.
 * @x: x-value to be evaluated.
 *
 * Description: Function that returns the value of a math function.
 * Return: Evaluation.
 */
double eval(double x)
{
	return (1 / (1 + (x * x)));
}
