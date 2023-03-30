#include "main.h"
#include <stdio.h>

/**
  * print_buffer - print buffer per byte
  * @buffer: the buffer
  * @size: the size of buffer to print
  */


void print_buffer(char *buffer, int size)
{
	int position = 0, i, j, index;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (position < size)
	{
		j = size - position < 10 ? size - position : 10;
		printf("%08x: ", position);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", buffer[position + i]);
			else
				printf("  ");
			if (i % 2)
				printf(" ");
		}
		for (i = 0; i < j; i++)
		{
			index = buffer[position + i];

			if (index < 32 || index > 132)
				index = '.';
			printf("%c", index);
		}
		printf("\n");
		position += 10;
	}
}
