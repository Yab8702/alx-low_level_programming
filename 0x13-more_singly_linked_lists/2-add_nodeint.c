#include "lists.h"


/**
  * add_nodeint - add a new node at the beginning of the list
  * @head: the head pointer
  * @n: the value;
  * Return: @head
  */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
