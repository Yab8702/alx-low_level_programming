#include "main.h"

/**
 * string_toupper - change lowercase letter to uppercase
 * @str: string
 * Return: all uprcase letter
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
