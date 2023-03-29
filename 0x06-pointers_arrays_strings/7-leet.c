#include "main.h"

/**
 * leet - encoded a string
 * @str:string
 * Return: encoded string
 */

char *leet(char *str)
{
	char encoded[5] = {'A', 'E', 'O', 'T', 'L'};
	char encoder[5] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while (j < 5)
		{
			if (str[i] == encoded[j] || str[i] == (encoded[j] + 32))
				str[i] = encoder[j];
			j++;
		}
	}
	return (str);
}


