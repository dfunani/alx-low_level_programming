#include "function_pointers.h"

/**
 * array_iterator - prints the elems of an array
 * @array: array to print
 * @size: of array
 * @action: how to print
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
