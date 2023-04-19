#include "function_pointers.h"
#include <stdio.h>


/**
 * array_iterator - array iterator using @action
 * @array: array
 * @size: size oof the array
 * @action: function pointer
 */



void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(*(array + i));
}
