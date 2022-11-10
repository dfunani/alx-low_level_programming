#include "main.h"

/**
 * array_range - new array ptr
 * @min: min val of the array
 * @max: max val of the array
 *
 * Return: ptr to array of ints
 *
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
