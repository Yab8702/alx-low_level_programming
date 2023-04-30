#include "lists.h"


/**
  * sum_listint - return the sum of all data in the list
  * @head: the head pointer
  * Return: @sum | 0[empty list]
  */


int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
