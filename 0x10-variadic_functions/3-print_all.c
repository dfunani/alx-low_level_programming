#include "variadic_functions.h"

/**
 * print_all - prints nums sep by char
 * @format: sep the ints
 *
 */

void print_all(const char * const format, ...)
{
	va_list int_list;
	char *s;
	unsigned int i;

	while (format == NULL)
		return;
	va_start(int_list, format);
	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(int_list, int));
			break;
		case 'i':
			printf("%i", va_arg(int_list, int));
			break;
		case 'f':
			printf("%f", va_arg(int_list, double));
			break;
		case 's':
			s = va_arg(int_list, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		     format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(int_list), printf("\n");
}
