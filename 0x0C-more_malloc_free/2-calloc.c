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
	void *ptr = malloc(size * nmemb);

	if (ptr == NULL || nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	return (ptr);
}
