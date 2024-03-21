#include "lists.h"


/**
 * get_dnodeint_at_index - return the nth node of a list
 * @head: the head pointer
 * @index: index of the node
 * Return: the new_node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	size_t position = 0;

	while (tmp != NULL)
	{
		if (position == index)
			return (tmp);
		tmp = tmp->next;
		position++;
	}
	return (NULL);
}
