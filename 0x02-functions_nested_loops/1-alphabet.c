#include <unistd.h>
/**
 *
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: 0
 *
 */

int print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter != 'z'; letter++)
	{
		write(1, &letter, 1);
	}
	letter = '\n';
	write(1, &letter, 1);
	return (0);
}
