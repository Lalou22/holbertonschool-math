/*
 * File: 0-heron.c
 * Auth: Lalo Rdz
 */
#include "heron.h"
t_cell *add_node(t_cell **head, double aprox);
/**
 * heron - Function that return the Heron sequence.
 * @p: The number whose square root we want to approximate.
 * @x0: an approximation to the square root we are looking for.
 *
 * Description: Function that return the Heron sequence until having
 * convergence with an error less or equal to 10^-7.
 * Return: List with the Heron sequence.
 */
t_cell *heron(double p, double x0)
{
	t_cell *head;
	double xn;

	xn = x0;
	head = NULL;

	while (fabs((xn * xn) - p) > 0.0000001)
	{
		add_node(&head, xn);
		xn = 0.5 * (xn +(p / xn));
	}
	return (head);
}

t_cell *add_node(t_cell **head, double aprox)
{
	t_cell *node;

	node = malloc(sizeof(t_cell));
	if (node == NULL)
		return (NULL);

	node->elt = aprox;
	node->next = *head;
	*head = node;
	return (node);
}
