#include "main.h"

/**
 * print_diagsums - prints the running totals
 * @a: array to eval
 * @size: diag len to sum
 *
 */

void print_diagsums(int *a, int size)
{
	int rightDiag;
	int leftDiag;
	int i;

	rightDiag = 0;
	leftDiag = 0;
	for ( i = 0; i < size; i++)
	{
		rightDiag += *(a + (size * i) + i);
		leftDiag += *(a + (size * i) + (size - 1 - i));
	}
	printf("%i, %i\n", rightDiag, leftDiag);
}
