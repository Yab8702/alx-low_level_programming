#include "main.h"

/**
 * times_table - print the 9 times table
 *
 */

void times_table(void)
{
	int row, col, table;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			table = col * row;
			if (table < 10)
			{
				_putchar(table + '0');
			}
			else if (table >= 10)
			{
				_putchar((table / 10) + '0');
				_putchar((table % 10) + '0');
			}
			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((table < 10 && (table + row) < 10))
					_putchar(' ');
					
			}
		}
		_putchar('\n');
	}
}
