#include "main.h"

/**
  * _strspn- gets the length of a prefix string
  * @str: the  string
  * @accept: the set string
  * Return: the intials segment length(success)
  */

unsigned int _strspn(char *str, char *accept)
{
	int i, j;
	unsigned int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j])
		{
			if (str[i] == accept[j])
			{
				len++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (len);
			j++;
		}
	}
	return (len);
}
