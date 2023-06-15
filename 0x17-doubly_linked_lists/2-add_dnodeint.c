#include "lists.h"


/**
 * add_dnodeint - add new nodes at the begining of a list
 * @head: the head pointer
 * @n: thye values
 * Return: the new list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = NULL;
	new_node->next = tmp;
	new_node->n = n;
	if (tmp != NULL)
		tmp->prev = new_node;
	*head = new_node;
	return (new_node);
}
