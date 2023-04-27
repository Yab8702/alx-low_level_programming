#include "lists.h"



/**
  * add_node_end - add a new node at the end
  * @head: head pointer
  * @str: string
  * Return: @new_node end node
  */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *new_node;
	unsigned int len = 0;

	while (*(str + len) != '\0')
		len++;
	ptr = *head;
	new_node = malloc(sizeof(list_t));

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new_node;
	return (new_node);
}
