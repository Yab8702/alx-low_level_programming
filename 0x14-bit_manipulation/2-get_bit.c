#include "main.h"

/**
  * get_bit - return the value of bit @index
  * @index: the index start from 0
  * @n: the number
  * Return: 1 | 0 (success) | > 64 bit  - 1
  */


int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n & (1 << index)) ? 1 : 0);
}
