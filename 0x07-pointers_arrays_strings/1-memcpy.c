#include "main.h"

/**
 * _memcpy - copy bytes from one mem to another
 * @dest: pointer of the result
 * @src: pointer to the bytes to be copied
 * @n: number of bytes to copy
 *
 * Return: pointer to the dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (src[i])
	{
		if (i == n)
		{
			break;
		}
		dest[i] = src[i];
		i++;
	}
	return dest;
}
