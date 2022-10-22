#include <stdio.h>
#include "main.h"

/**
 * main - prints largest prime factor based on formula n % i
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long n = 612852475143;

	while (i * i < n)
	{
		if (n % i == 0)
		{
			n /= i;
		}
		else
		{
			i++;
		}
	}
	printf("%li\n", n);
	return (0);
}
