#include "main.h"


/**
  * binary_to_uint - convert binary number to unsigned integer
  * @b: pointing to a string 0 and 1
  * Return: @num | 0[if @b not a number | NULL]
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i, j, len = 0, base;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;
	for (i = len - 1, j = 0; i >= 0 && j < len; i--, j++)
	{
		if (((b[i] - '0') < 0) || ((b[i] - '0') > 9))
			return (0);
		if (i == 0)
			base = 1;
		else
			base = _pow(2, i);
		num += (base * (b[j] - '0'));

	}
	return (num);

}

/**
  * _pow - @x raising @y
  * @x: the base
  * @y: the exponent
  * Return: @x | 1 y = 0
  */

int _pow(int x, int y)
{
	if (y == 0)
		return (1);
	return (x * (_pow(x, y - 1)));
}
