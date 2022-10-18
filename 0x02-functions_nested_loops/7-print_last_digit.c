#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: number to be eval for the last digit
 *
 * Return: int
 *
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	int k = (n % 10) + 48;
	int m = (n % 10);

        write(1, &k, 1);
	return (m);
}
