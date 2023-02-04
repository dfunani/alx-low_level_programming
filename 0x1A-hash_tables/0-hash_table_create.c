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
	hash_table_t* table;
	long unsigned int i;

	table = (hash_table_t*)malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t**)calloc((*table).size,
					      sizeof(hash_node_t));
	if (!table->array || (*table->array) == NULL)
		return (NULL);
	for(i = 0; i < table->size; i++)
	{
		(*table).array[i] = NULL;
	}

	return (table);
}
