#include "main.h"

/**
  * _memset - fills memory with a constant byte
  * @s: the memory location to be filled
  * @b: the constant value to be set
  * @n: number of byte to be filled
  * Return: @s(success)
  */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
