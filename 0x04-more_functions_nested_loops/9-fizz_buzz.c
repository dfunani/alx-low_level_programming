#include <stdio.h>

/**
 * main - lists numbers and replaces multiples of 3, 5 and 3&5 with fizz,
 *  buzz and fizzbuzz
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%i", i);
		}
		printf("%c", ' ');
	}
	printf("%c", '\n');
	return (0);
}
