#include "main.h"

/**
 * _strdup - array to store the desired cahar
 * @str: length of array
 *
 * Return: pointer to char
 *
 */

char *_strdup(char *str)
{
	char *array;
	unsigned int i;
	unsigned int j;

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	array = malloc(sizeof(char) * (i + 1));
	for (j = 0; j <= i; j++)
	{
		array[j] = str[j];
	}
	return (array);
}
