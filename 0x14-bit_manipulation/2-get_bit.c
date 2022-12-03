#include "main.h"

/**
 * get_bit - print int binary
 * @n: long
 * @index: point
 *
 * Return: int
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (!index || !n)
		return (-1);
	return ((n >> index) & 1);
}
