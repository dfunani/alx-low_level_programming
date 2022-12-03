#include "main.h"

/**
 * set_bit - print int binary
 * @n: long
 * @index: point
 *
 * Return: int
 *
 */

int get_bit(unsigned long int *n, unsigned int index)
{
	return ((1 << index) | n);
}
