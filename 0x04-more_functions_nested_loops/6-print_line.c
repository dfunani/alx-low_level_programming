#include "main.h"

/**
 * print_line - Prints a set number of lines based on int n
 * @n: int defining number of lines to plot
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
