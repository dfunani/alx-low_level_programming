#include "main.h"

/**
 * string_nconcat - concat strs for given n
 * @s1: str 1
 * @s2: str 2
 * @n: number of s2 chars
 *
 * Return: ptr to the char[]
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *s3;

	i = 0, j = 0;
	while (s1[i] != '\0')
	{
		if (!*s1 || !s1)
			s1[0] = '\0';
		i++;
	}
	while (s2[j] != '\0')
	{
		if (!*s2 || s2)
			s2[j] = '\0';
		j++;
	}
	s3 = malloc(sizeof(char) * (i + j + 1));
	if (s3 == NULL)
		return (NULL);
	for (k = 0; k <= i; k++)
	{
		if (s1[k] == '\0')
		{
			for (l = k; l <= n + k; l++)
			{
				if (s2[l - k] == '\0')
					break;
				s3[l] = s2[l - k];
			}
			s3[i + n] = '\0';
		}
		else
			s3[k] = s1[k];
	}
	return (s3);
}
