#include "main.h"

/**
 * create_array - array to store the desired cahar
 * @size: length of array
 * @c: char to store
 *
 * Return: pointer to char
 *
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);
	unsigned int i;

	if (size < 1)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
