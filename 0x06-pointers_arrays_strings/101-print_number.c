#include "main.h"

/**
  * print_number - print an integer
  * @num: number
  */

void print_number(int num)
{
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}
	if ((num / 10) != 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}

