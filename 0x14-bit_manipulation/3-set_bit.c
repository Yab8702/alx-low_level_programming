#include "main.h"


/**
  * set_bit - set the value of bit to 1 @index
  * @n: the number
  * @index: index
  * Return: 1(success) | -1(Failed)
  */



int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set = 1 << index;

	if (index > 63)
		return (-1);
	*n |= set;
	return (1);
}
