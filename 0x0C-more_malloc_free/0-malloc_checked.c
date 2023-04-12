#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked- allocate dynamic memory
 * @num: number of byte
 * Return:pointer to allocated memory
 * ON Error : normal termination 98
 */

void *malloc_checked(unsigned int num)
{
	void *p_m;

	p_m = malloc(num);
	if (p_m == NULL)
		exit(98);
	return (p_m);
}
