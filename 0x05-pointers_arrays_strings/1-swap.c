#include "main.h"

/**
 * swap_int - swaps 2 given its references
 * @a: firstint to be swapped
 * @b: corresponding into to be swapped
 *
 */

void swap_int(int *a, int *b)
{
	int trav;

	trav = *a;
	*a = *b;
	*b = trav;
}
