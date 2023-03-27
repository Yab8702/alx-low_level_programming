#include "main.h"

/**
 * puts2 - print one character out of two start from the first
 * @str: the string
 */


void puts2(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
