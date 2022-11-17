#include "variadic_functions.h"

/**
 * print_strings - prints nums sep by char
 * @separator: sep the ints
 * @n: num of ints
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list int_list;
	unsigned int i;
	char *s;

	va_start(int_list, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(int_list, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(int_list);
	printf("\n");
}
