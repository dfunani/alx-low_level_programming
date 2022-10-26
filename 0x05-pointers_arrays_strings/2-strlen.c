#include "main.h"

/**
 * _strlen - returns the string length
 * @n: a pointer to an array of chars
 *
 * Return: int of length of str
 *
 */

int _strlen(char *s)
{
	int i;

	i = 1;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
