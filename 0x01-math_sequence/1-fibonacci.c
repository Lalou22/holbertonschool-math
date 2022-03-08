/*
 * File: 1-fibonacci.c
 * Auth: Lalo Rdz
 */
#include "fibonacci.h"
t_cell *add_node(t_cell **head, int aprox);
/**
 * Fibonnaci - Function that return the Heron sequence.
 *
 * Description: Function that return the Fibonnaci sequence until having
 * convergence with an error less or equal to 10^-7.
 * Return: List with the Fibonnaci sequence.
 */
t_cell *Fibonnaci()
{
	t_cell *head;
	int a0, a1, a2;
	double diff = 0.0;
	double pressision =  0.0000001;

	a0 = 1;
	a1 = 1;
	head = NULL;
	add_node(&head, a0);
	add_node(&head, a1);

	do {
		a2 = a1 + a0;
		add_node(&head, a2);
		diff = fabs(((double) a2 / a1) - ((double) a1 / a0));
		a0 = a1;
		a1 = a2;
	} while (diff > pressision);
	return (head);
}

/**
 * add_node - Function that adds a node to the list.
 * @head: Pointer to the head's list.
 * @aprox: Value to be inserted into the node.
 *
 * Description: Adds a node to the list.
 * Return: List with the new node.
 */
t_cell *add_node(t_cell **head, int aprox)
{
	t_cell *node;

	node = malloc(sizeof(t_cell));
	if (node == NULL)
		return (NULL);

	node->elt = aprox;
	node->next = *head;
	*head = node;
	/* printf("%d\n", node->elt); */
	return (node);
}

/**
 * gold_number - Function that calculates the gold number.
 * @head: Pointer to the head's list.
 *
 * Description: Function that calculates the gold number using the last
 * two values from a Fibonacci series.
 * Return: Gold number.
 */
double gold_number(t_cell *head)
{
	double temp;
	t_cell *a, *b;

	a = head;
	b = head->next;
	temp = (double) a->elt / b->elt;
	return (temp);
}
