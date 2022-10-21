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
	int counter;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('F'), _putchar('z'), _putchar('z'),
				_putchar('B'), _putchar('u'), _putchar('z'),
				_putchar('z');
		}
		else if (i % 3 == 0)
		{
			_putchar('F'), _putchar('i'), _putchar('z'),
				_putchar('z');
		}
		else if (i % 5 == 0)
		{
			_putchar('B'), _putchar('u'), _putchar('z'),
				_putchar('z');
		}
		else
		{
			r = (i % 10 * 10) + (i % 100 / 10), r = (i > 9) ?
				(i % 10 == 0) ? (i * 10 + 1) :
				(i % 10 * 10) + (i % 100 / 10) : i;
			counter = 0;
			while (r)
			{
				_putchar(r % 10 + 48), r /= 10, (counter > 1) ?
					r = 0 : 0;
			}
		}
		_putchar(' ');
	}
	_putchar('\n');
}
