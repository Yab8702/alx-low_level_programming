#include "main.h"

/**
  * print_number - print an integer
  * @num: number
  */

void print_number(int num)
{
	unsigned int num2;

	num2 = num;
	if (num < 0)
	{
		num2 = -num;
		_putchar('-');
	}
	if ((num2 / 10) != 0)
	{
		print_number(num2 / 10);
	}
	_putchar((num2 % 10) + '0');
}

