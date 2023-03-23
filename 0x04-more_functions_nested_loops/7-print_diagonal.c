#include "main.h"

/**
 * print_diagonal - draw a diagonal  line
 *@n: the number of times
 */

void print_diagonal(int n)
{
	int d = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (d < n)
		{
			int s = 0;

			while (s < d)
			{
				_putchar(' ');
				s++;
			}
			_putchar('\\');
			_putchar('\n');
			d++;
		}
	}
}
