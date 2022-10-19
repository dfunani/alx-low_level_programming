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

	if (n < 99)
	{
		for (Tens = n / 10; Tens < 10; Tens++)
		{
			for (Units = n % 10; Units < 10; Units++)
			{
				if(Tens > 0 && Tens < 9 && Units < 9)
				{
					r = Tens + 48;
					write(1, &r, 1);
				}
				else if (Tens < 0)
				{
					write(1, &neg, 1);
					r = (Tens * -1) + 48;
					write(1, &r, 1);
				}
				if (Tens == 9)
				{
					if (Units > 8)
					{
						write(1, &nL, 1);
						break;
					}
					else
					{
						r = Tens + 48;
						write(1, &r, 1);
					}
			        }
				r = Units + 48;
				write(1, &r, 1);
				space = ' ';
				comma = ',';
				write(1, &comma, 1);
				write(1, &space, 1);

			}
		}
	}
}
