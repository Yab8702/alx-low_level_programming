#include "main.h"



/**
 * wildcmp - compare two string
 * @str1: string 1
 * @str2: string 2
 * Return: 1 @str1 == @str2 |0 not
 */

int wildcmp(char *str1, char *str2)
{
	if (*str1 == 0)
	{
		if (*str2 != 0 && *str2 == '*')
			return (wildcmp(str1, str2 + 1));
		return (*str2 == 0);
	}

	if (*str2 == '*')
		return (wildcmp(str1 + 1, str2) || wildcmp(str1, str2 + 1));
	else if (*str1 == *str2)
		return (wildcmp(str1 + 1, str2 + 1));
	return (0);
}

