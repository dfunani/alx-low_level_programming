#include "main.h"

/**
 * malloc_checked - create a block of mem
 * @b: block size
 *
 * Return: ptr to the block of any type
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	return (ptr);
}
