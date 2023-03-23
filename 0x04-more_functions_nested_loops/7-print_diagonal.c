#include "main.h"

/**
 * print_diagonal - draw a diagonal  line
 *@n: the number of times
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n > 0)
		{
			_putchar('\\');
			n--;
		}
		_putchar('\n');
	}
}
