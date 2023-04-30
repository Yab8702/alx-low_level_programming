#include "lists.h"


/**
  * free_listint - freeing memory space
  * @head: head pointer
  */


void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current  = head->next;
		free(head);
		head = current;
	}
}
