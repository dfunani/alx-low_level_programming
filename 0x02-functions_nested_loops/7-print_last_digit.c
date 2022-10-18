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
	int r = n % 10;
	write(1, &r, 1);
	return (r);
}
