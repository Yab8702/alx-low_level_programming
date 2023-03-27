#include "main.h"

/**
 * print_rev - print string , in reverse
 * @str: string
 */

void print_rev(char *str)
{
	int counter = 0, i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		counter += 1;
	}
	for (j = counter - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
