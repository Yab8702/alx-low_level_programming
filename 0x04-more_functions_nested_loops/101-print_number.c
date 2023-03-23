#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer
 */


void print_number(int n)
{
	int con;

	if (n < 0)
	{
		con = -n;
		_putchar('-');
	}
	else
		con = n;
	if (con / 10)
		print_number(con / 10);
	_putchar(con % 10 + '0');
}
