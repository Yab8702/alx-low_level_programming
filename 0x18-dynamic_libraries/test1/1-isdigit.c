#include "main.h"

/**
 *_isdigit - check for digit[0 to 9]
 * @c:the parameter to check
 * Return: Always 1(success)
 * On error return 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
