#include <unistd.h>

/**
 * _islower - Returns pos or neg is low or upp
 * @c: The int to be evaluated
 *
 * Return: 0 or 1
 *
 */

int _islower(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
