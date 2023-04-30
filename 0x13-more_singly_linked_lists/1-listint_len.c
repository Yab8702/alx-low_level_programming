#include "lists.h"


/**
  * listint_len - return the number of nodes
  * @h: the head pointer
  * Return: @count number of nodes
  */



size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + listint_len(h->next));
}
