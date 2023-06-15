#include "lists.h"

/**
 * dlistint_len - return the number of element
 * @h: head pointer
 * Return: number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t counter = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		counter += 1;
	}
	return (counter);
}
