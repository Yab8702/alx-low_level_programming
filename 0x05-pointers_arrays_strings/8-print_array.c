#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array of integer
 * @size: number of element
 * @a:array
 */

void print_array(int *a, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d", a[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
}
