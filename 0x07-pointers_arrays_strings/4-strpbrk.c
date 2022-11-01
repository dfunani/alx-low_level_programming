#include "main.h"

/**
 * _strbrk - returns a pointer to the first segment acceptable
 * @s: pointer to str to eval
 * @accept: str to segment
 *
 * Return: pointer to a str
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int index = -1;
	int i;
	int j;
	char *c = NULL;

	i = 0;
	while (accept[i] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (s[j] == accept[i] && (index == -1 || j < index))
			{
				index = j;
			}
			j++;
		}
		i++;
	}
	if (index == -1)
	{
		return (c);
	}
	else
	{
		c = &s[index];
		return (c);
	}
}
