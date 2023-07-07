#include "hash_tables.h"


/**
 * hash_table_create - create a hash tables
 * @size: the size of the array
 * Return: apointer to a hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
		return (NULL);
	for (; i < size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
}
