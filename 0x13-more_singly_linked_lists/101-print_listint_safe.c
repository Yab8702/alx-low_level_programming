#include "lists.h"


/**
 * print_listint_safe - print a linked list o
 * @head: the head pointer
 * Return: @count number of nodes
 */


size_t print_listint_safe(const listint_t *head)
{
	unsigned int count = 0, f = 0;
	const listint_t *current = head, *prev = head, *next;

	if (head == NULL)
		return (0);
	next = head->next;
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;

		if (f == 0 && next != NULL && next->next != NULL && prev != NULL)
		{
			if (next == prev)
			{
				f = 1;
				prev = current;
			}
			next = next->next->next;
		}
		if (f == 1 && prev == head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		prev = prev->next;
	}
	return (count);
}
