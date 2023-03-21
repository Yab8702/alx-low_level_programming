#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: the charagcter to check if it is  a letter or not
 * Return: On sucess 1
 * return 0 otherwise
 */


int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
