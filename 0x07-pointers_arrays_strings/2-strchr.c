#include "main.h"

/**
 * _strchr - return a char from a str
 * @s: string to check
 * @c: char to find
 *
 * Return: pointer to the char identified
 *
 */

char *_strchr(char *s, char c)
{
	int i;
	char *p = NULL;
	i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			p = &s[i];
			return p;
		}
		i++;
	}
	return p;
}
