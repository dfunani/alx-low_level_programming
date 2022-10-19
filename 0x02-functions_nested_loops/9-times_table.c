#include "main.h"

/**
 * times_table - prints the daily clock in 00:00:00 format
 *
 * Return: 0
 *
 */

void times_table(void)
{
	int H;
	int h;
	char nL = '\n';
	for (H = 0; H < 3; H++)
	{
		for (h = 0; h < 10; h++)
		{
			int tH = H * h;
			char tM = ',';
			char tm = ' ';

			write(1, &tH, 1);
			write(1, &tM, 1);
			write(1, &tm, 1);
		}
		write(1, &nL, 1);
	}
}
