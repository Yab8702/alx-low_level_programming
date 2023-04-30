#include "lists.h"


/**
  * insert_nodeint_at_index - inserting a new node at a given position
  * @head: the head pointer
  * @idx: the position
  * @n: the value
  * Return: @head | NULL[fail]
  */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *new_node, *temp;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0 && *head != NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (current != NULL)
	{
		if (count == idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (*head);
		}
		temp = current;
		current = current->next;
		count++;
	}
	return (NULL);
}
