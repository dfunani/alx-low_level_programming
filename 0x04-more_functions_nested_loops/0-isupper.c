#include "main.h"

/**
 * _isupper - takes a value and checks if is upper
 * @c: int arg to be tested
 *
 * Return: 0 or 1
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
