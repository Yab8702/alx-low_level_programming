#include "main.h"

/**
 * print_triangle - print a triangle using # symbol
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int row, col, s = 0;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 0; col < row; col++)
			{
				while (s < (size - row))
				{
					_putchar(' ');
					s++;
				}
				_putchar('#');
				_putchar('\n');
			}
		}
	}
}
