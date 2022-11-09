#include "main.h"

/**
 * _memset - fills memory with bytes
 * @s: pointer to the buffer to populate from
 * @b: constant byte to populate
 * @n: number of total bytes to create
 *
 * Return: Char * or pointer to the created bytes
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
