#include "main.h"

/**
 * factorial - returns a factoial of any number
 * @n: int to fact
 *
 * Return: int as the fact
 *
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
