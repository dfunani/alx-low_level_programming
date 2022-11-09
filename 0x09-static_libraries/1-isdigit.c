#include "main.h"

/**
 * _isdigit - eval is a given int is digit
 * @c: int to eval
 *
 * Return: 0, 1
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
