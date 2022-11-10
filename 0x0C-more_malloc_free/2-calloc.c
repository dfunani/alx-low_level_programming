#include "main.h"

/**
 * _calloc - returns ptr to an array
 * @nmemb: array length
 * @size: element size
 *
 * Return: ptr to any type
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(size) * nmemb);
	if ( ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		((int *)ptr)[i] = 0;
	}
	return (ptr);
}
