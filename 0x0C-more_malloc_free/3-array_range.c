#include "main.h"
#include <stdlib.h>


/**
 * array_range - create array within a range
 * @max:maximum range
 * @min:minimum range
 * Return:pointer to the newly created array | NULL(Failed)
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		*(p + i) = min++;
	return (p);
}
