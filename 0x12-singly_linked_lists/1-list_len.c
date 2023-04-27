#include "lists.h"



/**
  * list_len - return number of elements
  * @h: the head pointer
  * Return: @count number of elements
  */


size_t list_len(const list_t *h)
{
	const list_t *head = h;
	unsigned int count = 0;

	while (head)
	{
		count++;
		head = head->next;
	}
	return (count);
}

