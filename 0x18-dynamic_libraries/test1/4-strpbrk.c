#include "main.h"

/**
  * _strpbrk - search a string for any set of byte
  * @str: the string
  * @accept: the byte to check
  * Return:string that match(success) else NULL
  */

char *_strpbrk(char *str, char *accept)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j])
		{
			if (str[i] == accept[j])
				return (str + i);
			j++;
		}
	}
	return (0);
}
