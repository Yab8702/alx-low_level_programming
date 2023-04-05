#include "main.h"


/**
  * _puts_recursion - print a string
  * @str: string
  */


void _puts_recursion(char *str)
{
	if (*str)
	{
		_putchar(*str);
		str++;
		_puts_recursion(str);
	}
	else
		_putchar('\n');
}
