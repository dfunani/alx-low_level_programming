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
	int H, h, counter, r, m, s[2];
	char comma = ',', space = ' ', nL = '\n';

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
			if (H * h < 10 && h != 0)
			{
				write(1, &space, 1);
			}
			if (H * h == 0)
			{
				r = 48;
				write(1, &r, 1);
			}
			for (m = counter - 1; m >= 0; m--)
			{
				r = s[m] + 48;
				write(1, &r, 1);
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
	}
}
