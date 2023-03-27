#include "main.h"

/**
 * rev_string - reverse a string
 * @str: string
 */

void rev_string(char *str)
{
	int counter = 0, i, j;
	char rev = str[0];

	for (i = 0; str[i] != '\0'; i++)
	{
		counter += 1;
	}
	for (j = 0; j < counter; j++)
	{
		counter--;
		rev = str[j];
		str[j] = str[counter];
		str[counter] = rev;
	}
}
