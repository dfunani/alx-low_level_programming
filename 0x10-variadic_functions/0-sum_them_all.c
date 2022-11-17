#include "variadic_functions.h"

/**
 * sum_them_all - adds any list of ints
 * @n: number of items
 *
 * Return: int total
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list int_list;
	unsigned int i, sum;

	va_start(int_list, n);
	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(int_list, int);
	}
	va_end(int_list);
	return (sum);
}
