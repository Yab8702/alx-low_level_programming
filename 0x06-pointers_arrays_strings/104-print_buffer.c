#include "main.h"
#include <stdio.h>

/**
  * print_buffer - print buffer per byte
  * @buffer: the buffer
  * @size: the size of buffer to print
  */


void print_buffer(char *buffer, int size)
{
	int i, j, k, position = 0, index = 0, m;

	for (i = 0; i < size && position < size; i++)
	{
		printf("%08x: ", position), j = 0, k = 0, m = 0;
		while (j < 10 && size > position)
		{
			if (j % 2 == 0 && j > 0)
				printf(" ");
			printf("%02x", buffer[position]), j++, position++;
		}
		if (j < 10 && j > 0)
		{
			if ((10 - j) % 2 != 0)
			{
				while (m <= (10 - j))
				{
					printf(" "), m++;
				}
			}
			else
			{
				while (m <= (10 - j))
				{
					printf(" "), printf(" "), m++;
				}
			}
		}
		if (j % 2 == 0)
			printf(" ");
		while (k < j)
		{
			if (buffer[index] >= 32 && buffer[index] <= 126)
				printf("%c", buffer[index]);
			else
				printf(".");
			k++, index++;
		}
		printf("\n");
	}
}
