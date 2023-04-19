#include "function_pointers.h"
#include <stdio.h>


/**
 * int_index - search for an integer
 * @array: array to be searched
 * @size:size of the array
 * @cmp: function pointer to compare
 * Return:index of the array(found) | -1(!found|Error)
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}
	return (-1);
}
