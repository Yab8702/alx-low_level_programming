#include "main.h"
#include <stdio.h>


/**
  * print_diagsums - the sum of two diagonal square matrix
  * @arr:array[diagonal matrix]
  * @size:size of the array
  */


void print_diagsums(int *arr, int size)
{
	int i, j = size - 1, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(arr + (i * size) + i);
		sum2 += *(arr + (i * size) + j);
		j--;
	}
	printf("%d, %d\n", sum1, sum2);
}
