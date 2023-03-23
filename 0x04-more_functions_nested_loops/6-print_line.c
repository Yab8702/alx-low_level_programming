#include "main.h"

/**
 * print_line - draw a stright line
 * @n: the number of times of _ character
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
