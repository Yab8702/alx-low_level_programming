#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: the character  to check if lowercase or not
 * Return: On sucess 1
 * otherwise return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
