#include "main.h"


/**
  * get_endianness - check for multiply byte in memory
  *
  * Return: 0 (Big endian) | 1(Little endian)
  */

int get_endianness(void)
{
	int x = 1;
	char *ptr = (char *)&x;

	return ((int)*ptr);
}
