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
	array[0] = c;
	return array;
}
