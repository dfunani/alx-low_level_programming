#include "main.h"

/**
 * str_rev - reverse a str
 * @str: to rev
 *
 * Return: char *str_rev
 *
 */

char *str_rev(const char *str)
{
	char *revStr;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != 48 && str[i] != 49)
			return (NULL);
	revStr = malloc(sizeof(char) * i);
	if (revStr == NULL)
		return (NULL);
	for (j = 0; i >= 0; j++)
	{
		revStr[j] = str[i - 1];
		i--;
	}
	return (revStr);
}

/**
 * _pow - power of val
 * @n: num
 * @deg: pow of
 *
 * Return: val
 *
 */

unsigned int _pow(unsigned int n, unsigned int deg)
{
	unsigned int sum, i;

	sum = 1;
	for (i = 0; i < deg; i++)
		sum *= n;
	return (sum);
}

/**
 * binary_to_uint - print uint
 * @b: var to convert
 *
 * Return: uint
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result, i;
	char *revb;

	revb = str_rev(b);
	if (revb == NULL)
		return (0);
	result = 0;
	for (i = 0; revb[i] != '\0'; i++)
	{
		result += _pow(2, i) * (revb[i] - 48);
	}
	free(revb);
	return (result);
}
