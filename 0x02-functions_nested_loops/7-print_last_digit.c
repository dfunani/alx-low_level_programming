#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints the last digit
 * @n: number to be eval for the last digit
 *
 * Return: int
 *
 */

int print_last_digit(int n)
{
	int k;
	int m;

	if (n < 0 && n != INT_MIN)
	{
		n *= -1;
	}
	else if (n == INT_MIN)
	{
		n = INT_MAX;
		k = (n % 10) + 49;
		m = (n % 10) + 1;
		write(1, &k, 1);
		return (m);
	}

	k = (n % 10) + 48;
	m = (n % 10);

	write(1, &k, 1);
	return (m);
}
