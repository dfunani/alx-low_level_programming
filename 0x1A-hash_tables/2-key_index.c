#include "hash_table.h"

/**
 * key_index - returns index of the key
 * @key: key
 * @size: size
 *
 * Return: int
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
