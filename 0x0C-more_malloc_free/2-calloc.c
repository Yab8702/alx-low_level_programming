#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 * @str: the memory location to be filled
 * @b: the constant value to be set
 * @num: number of byte to be filled
 * Return: @str(success)
 */

char *_memset(char *str, char b, unsigned int num)
{
	unsigned int i = 0;

	for (i = 0; i < num; i++)
		str[i] = b;
	return (str);
}
/**
 * _calloc - allocate memory for an array
 * @memb: array member
 * @size: size of element
 * Return: pointer to allocated memory | NULL(Failed)
 */

void *_calloc(unsigned int memb, unsigned int size)
{
	char *p;

	if (memb == 0 || size == 0)
		return (NULL);
	p = malloc(memb * size);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, (memb * size));
	return (p);
}
