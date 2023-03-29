#include "main.h"

/**
 * _strcmp - compare two string
 * @str1:the firststring
 * @str2:the second string
 * Return:integer (sucess)
 */

int _strcmp(char *str1, char *str2)
{
	int i;

	for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	}
	return (0);
}

