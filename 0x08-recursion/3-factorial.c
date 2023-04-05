#include "main.h"


/**
  * factorial - return the factorial @num
  * @num:the number
  * Return: factorial(@num)(success)
  */


int factorial(int num)
{
	if (num == 1 || num == 0)
		return (1);
	else if (num < 0)
		return (-1);
	num *= factorial(num - 1);
	return (num);
}
