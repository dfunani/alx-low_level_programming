#include "main.h"

/**
 * _strlen - returns the string length
 * @s: a pointer to an array of chars
 *
 * Return: 0 or > 0int of length of str
 *
 */

int _strlen(char *s)
{
	int i;

	if (!s || !*s)
	{
		return (0);
	}
	i = 1;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
