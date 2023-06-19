#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the string
 * Return: length of string(success)
 */

int _strlen(char *s)
{
	int counter = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter += 1;
	}
	return (counter);
}
