#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @arr: element of  array
 * @n : size of array
 */

void reverse_array(int *arr, int n)
{
	int i, rev;

	for (i = 0; i < n; i++)
	{
		n--;
		rev = arr[i];
		arr[i] = arr[n];
		arr[n] = rev;
	}
}
