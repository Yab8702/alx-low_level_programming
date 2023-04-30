#include "lists.h"



/**
  * print_listint - print all z element[return all nodes]
  * @h: head pointer
  * Return: @count Number of node
  */



size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	unsigned int count = 0;

	while (current != NULL)
	{
		count++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (count);
}
