#include "main.h"


/**
  * is_prime_number - return prime number
  * @num: the number
  * Return: @num_is_prime  1(success) else 0
  */


int is_prime_number(int num)
{
	return (_prime(num, 2));
}


/**
  * _prime - check @n prime | not
  * @n:the number
  * @c: counter to check
  * Return: Always prime1(success) | not  0
  */

int _prime(int n, int c)
{
	if (n == 2 || c == n)
		return (1);
	if ((n <= 1 || n % c == 0))
		return (0);
	return (_prime(n, c + 1));
}
