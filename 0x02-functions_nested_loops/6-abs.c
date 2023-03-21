#include "main.h"

/**
 * _abs - the absolute value of an integer
 * @n: the number to check
 * Return: Always n(success)
 */



int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
