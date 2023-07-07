#include "hash_tables.h"



/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current;
	int comma_sep = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (!comma_sep)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			comma_sep = 0;
			current = current->next;
		}
	}
	printf("}\n");
}
