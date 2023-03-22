#include "main.h"

/**
 * largest_number - return the largest of 3 number
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largest number(sucess)
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
		largest = a;
	else if (a > b && c > a)
		largest = c;
	else if (b > c)
		largest = b;
	else
		largest = c;
	return (largest);
}
