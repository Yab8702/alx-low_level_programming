#include "main.h"


/**
  * _pow_recursion - return @num1 raised to power of @num2
  * @num1 :number to be raised
  * @num2 : the power
  * Return:@num1 raised to power of @num2 (success)
  * Onerror return -1
  */


int _pow_recursion(int num1, int num2)
{
	if (num2 == 0)
		return (1);
	else if (num2 < 0)
		return (-1);
	return (num1 * _pow_recursion(num1, num2 - 1));
}
