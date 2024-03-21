#include "lists.h"


/**
 * sum_dlistint - return the sum of all data in the list
 * @head: the head pointer
 * Return: the sum of the data in the list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
