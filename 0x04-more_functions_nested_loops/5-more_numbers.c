#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i;
	int r;
	int counter;

	for (i = 0; i < 15; i++)
	{
		if (i > 9)
		{
			r = (i % 10 * 10) + (i % 100 / 10);

			if (r < 10)
			{
				r += 100;
			}
		}
		else
		{
			r = i;
		}
		counter = 0;
		do {
			_putchar((r % 10) + 48);
			r /= 10;
			counter++;
		} while (r && counter < 2);
	}
	_putchar('\n');
}
