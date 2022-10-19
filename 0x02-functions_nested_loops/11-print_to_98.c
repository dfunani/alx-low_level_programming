#include "main.h"

/**
 * print_to_98 - prints the daily clock in 00:00:00 format
 *
 * Return: 0
 *
 */

void print_to_98(int n)
{
	int Tens;
	int r;
	int Units;
	char space;
	char comma;
	char neg = '-';

	for (Tens = n; Tens < 10; Tens++)
	{
		if(Tens > 0)
		{
			write(1, &Tens, 1);
		}
		else if (Tens < 0)
		{
			write(1, &neg, 1);
			r = (Tens * -1);
			write(1, &r, 1);
		}

		for (Units = 0; Units < 10; Units++)
		{
			if(Tens > 0 && Tens < 9)
			{
				write(1, &Tens, 1);
			}
			else if (Tens < 0)
			{
				write(1, &neg, 1);
				r = (Tens * -1);
				write(1, &r, 1);
			}
			if (Tens == 9 && Units == 9)
			{
				break;
			}
			write(1, &Units, 1);
			space = ' ';
			comma = ',';
			write(1, &comma, 1);
			write(1, &space, 1);
		}
	}
}
