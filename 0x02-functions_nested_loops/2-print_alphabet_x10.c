#include <unistd.h>

/**
 * print_alphabet_x10 - prints alphabet in lowercase
 *
 * Return: 0
 *
 */

int print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter != 'z' + 1; letter++)
		{
			write(1, &letter, 1);
		}

		letter = '\n';
		write(1, &letter, 1);
	}
	return (0);
}
