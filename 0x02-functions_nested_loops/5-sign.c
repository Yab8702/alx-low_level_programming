#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: the number to be check the sign
 * Return: Greater than zero 1 (success)
 * else if Less than zero -1(success)
 * otherwise  0(sucess)
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
