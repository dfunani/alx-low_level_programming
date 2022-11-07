#include <stdio.h>
#include <stdlib.h>

/**
 * main - muls 2 ints
 * @argc: argc count
 * @argv: args to mul
 *
 * Return: int 0 or 1
 *
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
