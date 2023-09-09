#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: is the size of the array
 * Return: pointer to a pointer to the newly created hash table
 * return NULL incase of an inconvenience
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;

	if (size <= 0)
		return (NULL);

	newTable = calloc(1, sizeof(hash_table_t));
	if (newTable == NULL)
		return (NULL);

	newTable->size = size;
	newTable->array = calloc(size, sizeof(hash_node_t *));
	if (newTable->array == NULL)
	{
		free(newTable);
		return (NULL);
	}
	return (newTable);
}
