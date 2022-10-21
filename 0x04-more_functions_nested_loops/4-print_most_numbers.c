#include "main.h"

/**
 * print_most_numbers - list 0-9 without 2 and 4
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
