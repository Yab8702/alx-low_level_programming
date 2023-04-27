#include "lists.h"


/**
  * print_list - printing lists
  * @h: the head pointer
  * Return: @count node | 0
  */


size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	const list_t  *head = h;

	while (head)
	{
		count++;
		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", head->len, head->str);
		head = head->next;
	}
	return (count);
}
