#include "lists.h"


/**
 * delete_dnodeint_at_index - delete node at agiven index
 * @head: the head pointer
 * @index: the position
 * Return: 1(success) | -1(Failed)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *tmp = *head;

	if (*head == NULL)
		return (-1);
	while (index != 0)
	{
		tmp = tmp->next;
		index--;
		if (tmp == NULL)
			return (-1);
	}
	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		prev = tmp->prev;
		prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = prev;
	}
	free(tmp);
	tmp = NULL;
	return (1);
}
