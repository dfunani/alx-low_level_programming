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
	char nL = '\n';
	int counter;
	int s[4];

	if (n < 99)
	{
		for (Tens = n; Tens < 99; Tens++)
		{
			if (Tens == 0)
			{
				comma = ',';
				space = ' ';
				r = Tens + 48;
				write(1, &r, 1);
				write(1, &comma, 1);
				write(1, &space, 1);
				continue;
			}
			if (Tens < 0)
			{
				r = Tens * -1;
			}
			else
			{
				r = Tens;
			}
			counter = 0;
			while (r)
			{
				s[counter] = r % 10;
				r /= 10;
				counter++;
				if (counter > 2)
				{
					break;
				}
			}
			for (Units = counter - 1; Units >= 0; Units--)
			{
				if (Tens < 0 && Units == counter - 1)
				{
					write(1, &neg, 1);
				}
				r = s[Units] + 48;
				write(1, &r, 1);
			}
			if (Tens != 98)
			{
				space = ' ';
				comma = ',';
				write(1, &comma, 1);
				write(1, &space, 1);
			}
			else
			{
				write(1, &nL, 1);
			}
		}
	}
	else if (n > 98)
	{
		for (Tens = n; Tens > 97; Tens--)
		{
			r = Tens;
			counter = 0;
			while (r)
			{
				s[counter] = r % 10;
				r /= 10;
				counter++;
				if (counter > 2)
				{
					break;
				}
			}

			for (Units = counter - 1; Units >= 0; Units--)
			{
				r = s[Units] + 48;
				write(1, &r, 1);
			}
			if (Tens != 98)
			{
				space = ' ';
				comma = ',';
				write(1, &comma, 1);
				write(1, &space, 1);
			}
			else
			{
				write(1, &nL, 1);
			}
		}
	}
}
