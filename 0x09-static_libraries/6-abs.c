#include "main.h"

/**
 * _abs - Returns an absolute version of an input value as in
 * @n: integer input to be abs
 *
 * Return: int > 0
 *
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
