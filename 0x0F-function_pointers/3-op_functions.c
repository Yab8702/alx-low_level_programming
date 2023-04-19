#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - return the sum of @a and @b
 * @a: the first number
 * @b: the second number
 * Return: @a + @b(success)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference of @ and @b
 * @a: the first number
 * @b: the second number
 * Return: @a - @b(success)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of @a and @b
 * @a: the first number
 * @b: the second number
 * Return: @a * @b(success)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the division of @a and @b
 * @a: the first number
 * @b: the second number
 * Return:@a / @b(success) | Error (@b = 0) NULL
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return the remainder of @a and @b
 * @a: the first number
 * @b: the second umber
 * Return: @a % @b(success) | Error(@b == 0) NULL
 */
int op_mod(int a, int b)
{
	return (a % b);
}
