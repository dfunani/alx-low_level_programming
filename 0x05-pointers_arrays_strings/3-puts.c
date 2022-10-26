#include "main.h"

/**
 * _puts - prints every char of a given char array or str
 * @str: string to print
 *
 */

void _puts(char *str)
{
	int i;

	if (!str || !*str)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
	}
}
