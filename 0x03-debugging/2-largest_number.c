#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (c > a && c > b)
	{
		largest = c;
	}
	else if (a == b && b == c && a == c)
	{
		largest = (a + b + c) / 3;
	}
	else if (a == b || a == c || b == c)
	{
		largest = (a == b) ? (a + b) / 2 : (b == c) ? (c + b) / 2 :
			(a + c) / 2;
	}

	return (largest);
}
