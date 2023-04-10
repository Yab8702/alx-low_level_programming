#include "main.h"



/**
 * _isalpha - checks for alphabetic character
 * @c: the character
 * Return: 1 @c is a letter| 0 not a letter
 */


int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
