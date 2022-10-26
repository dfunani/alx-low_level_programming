#include "main.h"

/**
 * print_rev - reverse a given string
 * @s: string to be reversed
 *
 */

void print_rev(char *s)
{
	int i;

	if (!s || !*s)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (s[i] != '\0')
		{
			i++;
		}
		while (i > 0)
		{
			_putchar(s[i]);
			i--;
		}
		_putchar('\n');
	}
}
