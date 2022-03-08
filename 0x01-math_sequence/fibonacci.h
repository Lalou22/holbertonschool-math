#ifndef FIBONNACI_H
#define FIBONNACI_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct t_cell - Struct
 * @elt: Int value from the Fibonnaci sequence.
 * @next: Pointer to the next cell.
 */
typedef struct t_cell
{
	int elt;
	struct t_cell *next;
} t_cell;

t_cell *Fibonnaci();
double gold_number(t_cell *head);

#endif /* FIBONNACI_H */
