#include "main.h"



/**
  * clear_bit - set the value of bit to 0 @index
  * @n: the number
  * @index: index
  * Return: 1(success) | -1(Failed)
  */


int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clear = ~(1 << index);

	if (index > 63)
		return (-1);
	*n &= clear;
	return (1);
}
