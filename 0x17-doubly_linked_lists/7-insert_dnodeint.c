#include "lists.h"


/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: the head pointer
 * @idx: the position
 * @n: the values
 * Return: the address of the new node(success) | NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp1 = *h, *tmp2, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx != 1)
	{
		tmp1 = tmp1->next;
		idx--;
		if (tmp1 == NULL)
			return (NULL);
	}
	if (tmp1->next == NULL)
		return (add_dnodeint_end(h, n));
	tmp2 = tmp1->next;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = tmp1;
	tmp1->next = new_node;
	new_node->next = tmp2;
	tmp2->prev = new_node;
	return (new_node);
}
