#include "hash_tables.h"


/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of new sorted hash table.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new sorted hash table.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hashTable = malloc(sizeof(shash_table_t));

	if (hashTable == NULL)
		return (NULL);
	hashTable->size = size;
	hashTable->array = malloc(size * sizeof(shash_node_t *));
	if (hashTable->array == NULL)
	{
		free(hashTable);
		return (NULL);
	}
	memset(hashTable->array, 0, size * sizeof(shash_node_t *));
	hashTable->shead = NULL;
	hashTable->stail = NULL;

	return (hashTable);
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */


int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *current, *newNode, *temp;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	newNode = malloc(sizeof(shash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[index];
	newNode->sprev = NULL;
	newNode->snext = NULL;
	ht->array[index] = newNode;
	if (ht->shead == NULL || strcmp(newNode->key, ht->shead->key) < 0)
	{

		newNode->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = newNode;
		ht->shead = newNode;
		if (ht->stail == NULL)
			ht->stail = newNode;
	}
	else
	{

		temp = ht->shead;
		while (temp->snext != NULL && strcmp(newNode->key, temp->snext->key) > 0)
			temp = temp->snext;
		newNode->snext = temp->snext;
		if (temp->snext != NULL)
			temp->snext->sprev = newNode;
		temp->snext = newNode;
		newNode->sprev = temp;
		if (newNode->snext == NULL)
			ht->stail = newNode;
	}
	return (1);
}

/**
 * shash_table_get - Retrieve the value associated with
 *                   a key in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;
	current = ht->shead;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->snext != NULL)
			printf(", ");
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;
	current = ht->stail;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->sprev != NULL)
			printf(", ");
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *current, *tmp;

	if (ht == NULL)
		return;
	for (; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			tmp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = tmp;
		}
	}

	free(ht->array);
	free(ht);
}
