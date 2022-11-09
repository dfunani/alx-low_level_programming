#include "main.h"

/**
 * str_concat - array to store the desired str
 * @s1: str to concat
 * @s2: str to concat to s1
 *
 * Return: pointer to char
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int l;

	i = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[k] != '\0')
	{
		k++;
	}
	array = malloc(sizeof(char) * (i + k + 1));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		array[j] = s1[j];
	}
	for (l = i + 1; l <= i + k; l++)
	{
		array[l] = s2[l - i - 1];
	}
	return (array);
}
