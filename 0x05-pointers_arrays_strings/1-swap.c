#include "main.h"

/**
 * swap_int - swaping two integers value
 * @a: the first integer
 * @b:the second integer
 */

void swap_int(int *a, int *b)
{
	int swap_var;

	swap_var = *a;
	*a = *b;
	*b = swap_var;
}
