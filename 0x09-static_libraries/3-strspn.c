#include "main.h"

/**
 * _strspn - returns the segment in both lists as a len
 * @s: pointer to str to check
 * @accept: str to review
 *
 * Return: int indicatin len of seg
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int len;
	int j;
	int check;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		j = 0;
		check = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				len++;
				check = 1;
			}
			j++;
		}
		if (!check)
		{
			break;
		}
		i++;
	}
	return (len);
}
