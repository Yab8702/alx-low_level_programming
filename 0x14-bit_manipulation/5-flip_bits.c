#include "main.h"


/**
  * flip_bits - the hamming distance problems
  * @n: the first number
  * @m: the second number
  * Return: @diff(difference in bit)
  */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		if (diff & 1)
			count++;
		diff >>= 1;
	}
	return (count);
}
