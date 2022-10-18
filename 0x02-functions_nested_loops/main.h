#ifndef MAIN
#define MAIN
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
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

#endif
