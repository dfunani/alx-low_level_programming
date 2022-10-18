#include <unistd.h>

/**
 *
 * main - prints alphabet in lowercase
 *
 * Return: 0
 *
 */

int print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter != 'z' + 1; letter++)
	{
		write(1, &letter, 1);
	}

	letter = '\n';
	write(1, &letter, 1);
	return (0);
}
