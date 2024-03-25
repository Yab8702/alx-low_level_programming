#include "main.h"

/**
 * _strncat - concatenates string with n or more byte
 * @dest: the destination string
 * @src: the sourece string
 * @n: number of byte to pass
 * Return: resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len] != '\0')
		len++;

	for (i = 0; i < n && src[i] != '\0'; i++, len++)
		dest[len] = src[i];

	dest[len] = '\0';

	return (dest);
}
