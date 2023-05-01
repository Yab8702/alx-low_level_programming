#include "lists.h"



/**
  * reverse_listint - reversing lists
  * @head: the head pointer
  * Return: @head lists
  */



listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL;
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = next;
	}
	*head = rev;
	return (*head);
}
