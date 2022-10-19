#include "main.h"

/**
 * Less_98 - Prints the loop values
 * @n: an int to be used for printing
 *
 * Return Void
 *
 */

void Less_98(int n)
{
	int Tens, Units, r, s[4], counter;
	char space, comma;
	char nL = '\n';
	char neg = '-';

	for (Tens = n; Tens < 99; Tens++)
	{
		if (Tens == 0)
		{
			comma = ',', space = ' ', r = Tens + 48, write(1, &r, 1)
				, write(1, &comma, 1), write(1, &space, 1);
			continue;
		}
		r = (Tens < 0) ? Tens * -1 : Tens;
		counter = 0;
		while (r)
		{
			s[counter] = r % 10, r /= 10, counter++;
			if (counter > 2)
			{
				break;
			}
		}
		for (Units = counter - 1; Units >= 0; Units--)
		{
			(Tens < 0 && Units == counter - 1) ? write(1, &neg, 1) :
				0;
			r = s[Units] + 48, write(1, &r, 1);
		}
		if (Tens != 98)
		{
			space = ' ', comma = ',', write(1, &comma, 1),
				write(1, &space, 1);
		}
		else
		{
			write(1, &nL, 1);
		}
	}
}

/**
 * Greater_98 - Prints loop over 98
 * @n: Int to be looped
 *
 * Return Void
 *
 */

void Greater_98(int n)
{
	int Tens;
	int r;
	int Units;
	char space;
	char comma;
	char nL = '\n';
	int counter;
	int s[4];

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
			r = s[Units] + 48, write(1, &r, 1);
		}
		if (Tens != 98)
		{
			space = ' ', comma = ',', write(1, &comma, 1),
				write(1, &space, 1);
		}
		else
		{
			write(1, &nL, 1);
		}
	}
}

/**
 * print_to_98 - prints on a loop using the 2 methods
 * @N: int to determine directyion of print
 *
 * Return Void
 *
 */

void print_to_98(int N)
{
	if (N < 99)
	{
		Less_98(N);
	}
	else if (N > 98)
	{
		Greater_98(N);
	}
}
