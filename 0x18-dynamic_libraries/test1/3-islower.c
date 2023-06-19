#include "main.h"


/**
 * _islower - check for lowercase character
 * @c: the character
 * Return: 1 @c _islower(success) | 0 Not lower
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

