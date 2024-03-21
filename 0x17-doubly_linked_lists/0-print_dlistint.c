#include "lists.h"


/**
 * print_dlistint - print all the elements of a double linked list
 * @h: the head pointer
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t counter = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		counter += 1;
	}
	return (counter);
}
