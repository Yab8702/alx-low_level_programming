#include "main.h"

/**
 * cap_string - capitalize string based on delimeter
 * @str: string
 * Return: capitalize string
 */

char *cap_string(char *str)
{
	int i, j;
	char d[13] = {' ', ',', ';', '.', '!', '?'
		, '"', '(', ')', '{', '}', '\t', '\n'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = 0;
			while (j < 13)
			{
				if (str[i - 1] == d[j])
				{
					str[i] -= 32;
					if (str[i -1] == '\t')
						str[i -1] = ' ';
					break;
				}
				j++;
			}
		}
	}
	return (str);
}
