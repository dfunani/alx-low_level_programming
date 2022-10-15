#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
* main - Entry Point
*
* Description: print using outchar
*
* Return: 0
*/

int main(void)
{
	int i;
	int j;
	int k;
	int m;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (m = j + 1; m < 58; m++)
				{
					if (k == 48 && m == 48)
					{
						continue;
					}
					else
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(m);
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
