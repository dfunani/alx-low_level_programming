#include "main.h"

/**
 * print_binary - print int binary
 * * @n: long
 *
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + 48);
}
