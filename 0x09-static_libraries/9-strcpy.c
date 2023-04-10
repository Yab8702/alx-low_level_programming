#include "main.h"

/**
 * *_strcpy -copies  a string
 * @dest:destination string
 * @src :source string
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
		len++;
	for (i = 0; i <= len; i++)
	{
		if (i == len)
		{
			dest[i] = '\0';
			break;
		}
		dest[i] = src[i];
	}
	return (dest);
}
