#include "main.h"


/**
  * _sqrt_recursion - return the natural square root of @num
  * @num: the number
  * Return:@num square root(success)
  * On Error: -1(Error)
  */

int _sqrt_recursion(int num)
{
	return (_sqrt(num, 0));
}
/**
  * _sqrt - return the root _sqrt_recursion
  * @n: the number
  * @root: the root
  * Return: @root(success)
  * On Error: -1(Error)
  */
int _sqrt(int n, int root)
{
	if (root * root > n || n < 0)
		return (-1);
	if (root * root == n)
		return (root);
	return (_sqrt(n, root + 1));
}
