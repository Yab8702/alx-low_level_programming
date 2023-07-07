#include "hash_tables.h"



/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 * Return: the value | NULL
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];

	while (current != NULL)
	{
		if (current->key == key)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
