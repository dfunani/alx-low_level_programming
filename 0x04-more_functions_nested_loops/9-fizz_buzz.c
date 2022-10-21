#include "main.h"

/**
 * main - lists numbers and replaces multiples of 3, 5 and 3&5 with fizz,
 *  buzz and fizzbuzz
 *
 */

void main(void)
{
	int i;
	int r;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (i% 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			if(i > 9)
			{
				if (i % 10 == 0)
				{
					r = (i % 10 * 10) + (i % 100 /10) * 10;
				}
				else
				{
					r = (i % 10 * 10) + (i % 100 /10);
				}
			}
			else
			{
				r = i;
			}
			while (r)
			{
				_putchar(r % 10 + 48);
				r /= 10;
			}
		}
		_putchar(' ');
	}
	_putchar('\n');
}
