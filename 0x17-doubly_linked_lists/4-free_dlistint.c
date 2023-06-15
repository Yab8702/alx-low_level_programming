#include "lists.h"


/**
 * free_dlistint - free the memory of the list
 * @head: the head pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
