#include "lists.h"


/**
  * get_nodeint_at_index - return @n index node
  * @head: the head pointer
  * @index: index of nodes[start from 0]
  * Return: @node_index | NULL[if @node_index not exit]
  */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_index = head;
	unsigned int count = 0;

	while (node_index != NULL)
	{
		if (count == index)
			return (node_index);
		node_index = node_index->next;
		count++;
	}
	return (NULL);
}
