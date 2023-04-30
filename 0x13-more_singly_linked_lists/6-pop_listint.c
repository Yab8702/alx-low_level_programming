#include "lists.h"


/**
  * pop_listint - delete the head of nodes
  * @head: the head pointer
  * Return: the deleted value
  */


int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int value = 0;

	if (*head == NULL)
		return (value);
	*head = temp->next;
	value = temp->n;
	free(temp);
	temp = NULL;
	return (value);
}
