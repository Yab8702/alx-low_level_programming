#include "main.h"

/**
 * rev_string - reverse a string
 * @str: string
 */

void rev_string(char *str)
{
	int counter = 0, i, j, k;

	for (i = 0; str[i] != '\0'; i++)
	{
		counter += 1;
	}
	k = counter;
	for (j = 0; j < counter; j++)
	{
		str[j] = str[k - 1];
		k--;
	}
}
