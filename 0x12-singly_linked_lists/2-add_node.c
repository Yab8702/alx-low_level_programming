#include "lists.h"


/**
  * add_node - add new element at the begining
  * @head: head pointer
  * @str: string
  * Return: @addr address of the new element | NULL
  */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	unsigned int len = 0;

	while (*(str + len) != '\0')
		len++;

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	(*head) = new_node;
	return ((*head));
}
