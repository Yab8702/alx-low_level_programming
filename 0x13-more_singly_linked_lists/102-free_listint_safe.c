#include "lists.h"





/**
 * free_listint_safe - prints a list
 * @h: the head pointer
 * Return: @count size of list that was freed
 */



size_t free_listint_safe(listint_t **h)
{
	size_t  count = 0;
	listint_t *current = *h, *temp;
	long diff;

	if (!h || !*h)
		return (0);
	*h = NULL;
	while (current)
	{
		diff = current - current->next;
		if (diff > 0)
		{
			temp = current->next;
			free(current);
			current = temp;
			count++;
		}
		else
		{
			free(current);
			current = NULL;
			count++;
			break;
		}
	}
	current = NULL;
	return (count);
}
