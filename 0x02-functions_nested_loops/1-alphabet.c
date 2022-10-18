#include "main.h"
/**
 *
 * main - prints alphabet in lowercase
 *
 * Return: 0
 *
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter != 'z' + 1; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
	return (0);
}
