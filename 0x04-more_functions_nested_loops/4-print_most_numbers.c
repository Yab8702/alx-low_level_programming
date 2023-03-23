#include "main.h"

/**
 * print_most_numbers - print numbers [0-9][!(2 &4)]
 */

void print_most_numbers(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		if ((ch != 2) && (ch != 4))
			_putchar(ch + '0');
	}
	_putchar('\n');
}
