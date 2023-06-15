#include "lists.h"


/**
 * add_dnodeint_end - at a new node at the end
 * @head: the head pointer
 * @n: the values
 * Return: the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	new_node->prev = tmp;
	tmp->next = new_node;
	return (new_node);
}
