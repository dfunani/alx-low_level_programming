#include "hash_tables.h"

/**
 * hash_table_create - returns a new empty hashtable
 * @size: size of the table to return
 *
 * Return: Ptr to the new Hash Table
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int index;

	if (size <= 0) /* size must be a positive number */
		return (NULL);

/* allocate memory for table and array and check for fail */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
/* traverse size and set each array index to null inside table */
	for (index = 0; index < size; index++)
		new_table->array[index] = NULL;
	return (new_table);
}
