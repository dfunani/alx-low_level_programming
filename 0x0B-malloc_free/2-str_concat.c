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

	i = 0;
	k = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	while (str[k] != '\0')
	{
		k++;
	}
	array = malloc((sizeof(char) * i) + (sizeof(char) * k) + 1);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		array[j] = s1[j];
	}
	for (j = i + 1; j <= i + k; j++)
	{
		array[j] = s2[j];
	}
	return (array);
}
