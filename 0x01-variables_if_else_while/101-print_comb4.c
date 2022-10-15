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

	for (i = 48; i < 56; i++)
	{
		for (j = i + 1; j < 57; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (tolower(i) != 55)
				{
					putchar(',');
					putchar(' ');
				}
			
			}
		}
	}	
	putchar('\n');
	return (0);
}
