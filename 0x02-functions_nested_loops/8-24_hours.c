#include "main.h"

/**
 * jack_bauer - prints the daily clock in 00:00:00 format
 *
 * Return: 0
 *
 */

int jack_bauer(void)
{
	int H;
	int h;
	int M;
	int m;
	int S;
	int s;
	char q;

	q = ':';

	for (H = 0; H < 3; H++)
	{
		for (h = 0; h < 10; h++)
		{
		        for (M = 0; M < 3; M++)
			{
				for (m = 0; m < 10; m++)
				{
					for (S = 0; S < 3; S++)
					{
						for (s = 0; s < 10; s++)
						{
							int tH = H + 48;
							int th = h + 48;
							int tM = M + 48;
							int tm = m + 48;
							int tS = S + 48;
							int ts = s + 48;
							char nL = '\n';

							write(1, &tH, 1);
							write(1, &th, 1);
							write(1, &q, 1);
							write(1, &tM, 1);
							write(1, &tm, 1);
							write(1, &q, 1);
							write(1, &tS, 1);
							write(1, &ts, 1);
							write(1, &nL, 1);
						}
					}
				}
			}
		}
	}
	return (0);
}
