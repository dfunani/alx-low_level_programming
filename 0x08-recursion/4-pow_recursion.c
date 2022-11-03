#include "main.h"

/**
 * _pow_recursion - returns a factoial of any number
 * @x: int to fact
 * @y: int to pow
 *
 * Return: int as the fact
 *
 */

int _pow_recursion(int x, int y)
{
	if (n > 0)
	{
		return (n * _pow_recursion(x, y - 1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
