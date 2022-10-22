#include "main.h"

/**
 * print_number - prints the given int to stdout
 * @n: int too be printed
 *
 */

void print_number(int n)
{
	int arr[10];
	int j;
	int i = 0;

	if (n == 0)
	{
		_putchar(48);
	}
	while (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			arr[i] = (-(n % 10) + 48);
			n /= -10;
		}
		else
		{
			arr[i] = (n % 10 + 48);
			n /= 10;
		}
		i++;
	}
	for (j = i - 1; j > -1; j--)
	{
		_putchar(arr[j]);
	}
}
