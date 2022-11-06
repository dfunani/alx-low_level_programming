#include <stdio.h>

/**
 * main - program name is printed
 * @argc: number of input args
 * @argv: args to be printed
 *
 * Return: int 0 or 1
 *
 */

int main(int __attribute__ ((unused)) argc, char **argv)
{
	int i = 0;
	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
