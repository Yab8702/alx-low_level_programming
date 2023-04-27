#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
  * struct list_t - structure template for list element
  * @str: string
  * @len: length of the string
  * @next: pointer to struct list_t
  */


typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;
size_t print_list(const list_t *);
size_t list_len(const list_t *);
list_t *add_node(list_t **, const char *);
list_t *add_node_end(list_t **, const char *);
void free_list(list_t *);
#endif
