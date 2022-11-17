#include "function_pointers.h"

/**
 * main - entry point
 * @argc: main argc count
 * @argv: args
 *
 * Return: 0
 *
 */

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%s", "Error");
		exit(2);
	}
	for (i = 0; i < atoi(argv[1]); i++)
	{
		printf("%.2hhx", ((char *)&main)[i]);
		if (i < atoi(argv[1]) - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
