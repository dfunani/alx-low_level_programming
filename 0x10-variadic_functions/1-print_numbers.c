#include "variadic_functions.h"

/**
 * print_numbers - prints nums sep by char
 * @separator: sep the ints
 * @n: num of ints
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list int_list;
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}
	va_start(int_list, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(int_list, int));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(int_list);
	printf("\n");
}
