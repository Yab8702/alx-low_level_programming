#include "main.h"

/**
 * _strcat - concatinates two string
 * @dest: destination string
 * @src: source string
 * Return: New concatinated pointer @dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len] != '\0')
		len++;

	for (i = 0; src[i] != '\0'; i++, len++)

		dest[len] = src[i];

	dest[len] = '\0';

	return (dest);
}

