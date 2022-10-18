#include "main.h"

/**
 * jack_bauer - prints the daily clock in 00:00:00 format
 *
 * Return: 0
 *
 */

void jack_bauer(void)
{
	int H;
	int h;
	int M;
	int m;
	char q;

	q = ':';

	for (H = 0; H < 3; H++)
	{
		for (h = 0; h < 10; h++)
		{
			if (H == 2 && h > 3)
			{
				break;
			}
		        for (M = 0; M < 6; M++)
			{
				for (m = 0; m < 10; m++)
				{
					int tH = H + 48;
					int th = h + 48;
					int tM = M + 48;
					int tm = m + 48;
					char nL = '\n';

					write(1, &tH, 1);
					write(1, &th, 1);
					write(1, &q, 1);
					write(1, &tM, 1);
					write(1, &tm, 1);
					write(1, &nL, 1);
				}
			}
		}
	}
}
