#include "main.h"


/**
  * _memcpy - copies contents of the src to dest
  * @src: the source
  * @dest: destination
  * @n: number of byte
  * Return: @dest(success)
  */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
