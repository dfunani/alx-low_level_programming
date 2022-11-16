#include "function_pointers.h"

/**
 * int_index - returns the index of a val
 * @array: array to cmp
 * @size: array len
 * @cmp: pointer func
 *
 * Return: index or -1
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int val;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		val = cmp(array[i]);
		if (val != 0)
		{
			return (i);
		}
	}
	return (-1);
}
