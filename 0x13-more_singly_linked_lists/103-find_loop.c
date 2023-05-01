#include "lists.h"


/**
 * find_listint_loop - finds a loop in a list
 * @head: the head pointer
 * Return: Address of loop |NULL if no loop
 */


listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr1, *ptr2;

	if (!head)
		return (NULL);
	ptr2 = head->next;
	for (; ptr2 != NULL; ptr2 = ptr2->next)
	{
		if (ptr2 == ptr2->next)
			return (ptr2);
		ptr1 = head;
		while (ptr1 != ptr2)
		{
			if (ptr1 == ptr2->next)
				return (ptr2->next);
			ptr1 = ptr1->next;
		}
	}

	return (NULL);
}
