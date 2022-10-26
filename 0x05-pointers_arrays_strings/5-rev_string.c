#include "main.h"

/**
 * rev_string - reverse a given string
 * @s: string to be reversed
 *
 */

void rev_string(char *s)
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
			_putchar(s[i]);
			i++;
		}
		_putchar('\n');
		while (i >= 0)
		{
			if (s[i] != '\0')
			{
				_putchar(s[i]);
			}
			i--;
		}
		_putchar('\n');
	}
}
