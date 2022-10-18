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
	write(1, &n, 1);
	return (n % 10);
}
