#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: the character
 * Return: always 1(sucess)
 * On error return 0
 */


int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
