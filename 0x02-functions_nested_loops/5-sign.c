#include "main.h"

/**
 * print_sign - evals if a value is pos, neg or zero
 * @n: int taken in to be evaluated
 * Return: 0,1,-1
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
