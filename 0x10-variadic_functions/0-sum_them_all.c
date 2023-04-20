#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - the sum of all its parameter
  * @n: number of parameter
  * Return: @sum | 0(@n == 0)
  */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list op;

	va_start(op, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(op, int);
	return (sum);
}
