#include "main.h"

/**
 * _realloc - move a block of mem
 * @ptr: ptr to move
 * @old_size: size of current ptr
 * @new_size: size of new ptr
 *
 * Return: ptr to new void
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (ptr == NULL)
	{
		return (NULL);
	}
	if (new_size == 0)
	{
		free(ptr);
	}
	new_ptr = malloc(new_size);
	for (i = 0; i < old_size; i++)
	{
		if (i == new_size)
		{
			break;
		}
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new_ptr);
}
