#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while (((str[i] >= 'a' && str[i] <= 'z') ||
					(str[i] >= 'A' && str[i] <= 'Z')) && (j == 0))
		{
			if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
			{
				str[i] -= 13;
				break;
			}
			str[i] += 13;
			j++;
		}
	}
	return (str);
}
