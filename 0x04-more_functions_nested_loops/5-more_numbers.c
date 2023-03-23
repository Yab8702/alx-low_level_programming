#include "main.h"

/**
 * more_numbers - print x10 from 0-14
 */

void more_numbers(void)
{
	int row, col;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col <= 14; col++)
		{
			if (col > 9)
				_putchar(49);
			_putchar((col % 10) + '0');
		}
		_putchar('\n');
	}
}
