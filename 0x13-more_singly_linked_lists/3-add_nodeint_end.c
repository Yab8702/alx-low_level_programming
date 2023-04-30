#include "lists.h"


/**
  * add_nodeint_end - add new nodes at the end
  * @head: the head pointer
  * @head: the head pointer
  * @n: values to fill
  * Return: @new_node (new list)
  */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new_node;
	return (new_node);
}
