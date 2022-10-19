#include "main.h"
#include <string.h>

/**
 * times_table - prints the daily clock in 00:00:00 format
 *
 * Return: 0
 *
 */

void times_table(void)
{
	int H;
	int counter, r, m;
	char comma = ',';
	char space = ' ';
	int h;
	char nL = '\n';
	int s[2];
	int r;

	for (H = 0; H < 10; H++)
	{
		for (h = 0; h < 10; h++)
		{
			r = H * h;
			counter = 0;
			while (r)
			{
				s[counter] = r % 10;
				r /= 10;
				counter++;
			}
			for (m = counter - 1; m >= 0; m++)
			{
				write(1, &s[m], 1);
			}
			if (h >= 9)
			{
				write(1, &nL, 1);
			}
			else
			{
				write(1, &comma, 1);
				write(1, &space, 1);
			}
		}
		write(1, &nL, 1);
	}
}
