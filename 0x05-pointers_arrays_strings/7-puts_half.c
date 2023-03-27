#include "main.h"

/**
 * puts_half - print half of string
 * @str: string
 */

void puts_half(char *str)
{
	int len = 0, n, i;

	while (str[len] != '\0')
		len++;
	if (len % 2 != 0)
		n = (len + 1) / 2;
	else
		n = len / 2;
	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
