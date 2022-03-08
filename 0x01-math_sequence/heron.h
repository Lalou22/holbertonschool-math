#ifndef HERON_H
#define HERON_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct t_cell - struct
 * @elt: Double value from the heron sequence.
 * @next: Pointer to the next cell.
 */
typedef struct t_cell
{
	double elt;
	struct t_cell *next;
} t_cell;

t_cell *heron(double p, double x0);

#endif /* HERON_H */
