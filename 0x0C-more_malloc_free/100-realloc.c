#include "main.h"
#include <stdlib.h>


/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to @old_size(memory block)
 * @old_size:old memory block
 * @new_size:new memory block
 * Return: @new_size (memory block)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *old_p;
	unsigned int i = 0, j = 0;

	if (old_size == new_size)
		return (ptr);
	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	old_p = ptr;
	if (new_size < old_size)
	{
		while (i < new_size)
		{
			*(p + i) = *(old_p + i);
			i++;
		}
	}
	if (new_size > old_size)
	{
		while (j < old_size)
		{
			*(p + j) = *(old_p + j);
			j++;
		}
	}
	free(ptr);
	return (p);
}
