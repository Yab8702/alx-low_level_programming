#include "lists.h"



/**
  * delete_nodeint_at_index - deleting nodes at any position
  * @head: the head pointer
  * @index: the position that node to be deleted
  * Return: 1(success) | -1 (Failed)
  */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev = *head;
	unsigned int count = 0;

	if (index == 0 && *head != NULL)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	else
	{
		while (current != NULL)
		{
			if (count == index)
			{
				prev->next = current->next;
				free(current);
				current = NULL;
				return (1);
			}
			prev = current;
			current = current->next;
			count++;
		}
	}
	return (-1);
}
