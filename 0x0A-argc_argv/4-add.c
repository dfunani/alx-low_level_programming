#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - returns a sum of all args
 * @argc: arg count
 * @argv: args
 *
 * Return: 0 or 1
 *
 */

int main(int argc, char **argv)
{
	int runningTotal;
	int i;

	if (argc < 2)
	{
		printf("%i\n", 0);
		return (0);
	}
	runningTotal = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < 0)
		{
			return (1);
		}
		else if (isdigit(*argv[i]) == 0)
		{
			printf("%s\n", "Error");
			return (1);
		}
		runningTotal += atoi(argv[i]);
	}
	printf("%i\n", runningTotal);
	return (0);
}
