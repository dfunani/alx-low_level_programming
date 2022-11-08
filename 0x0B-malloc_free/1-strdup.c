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
	while (str[i] != '\0')
	{
		i++;
	}
	if (!str || !*str || str == NULL)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * i);
	for (j = 0; j <= i; j++)
	{
		array[j] = str[j];
	}
	return (array);
}
