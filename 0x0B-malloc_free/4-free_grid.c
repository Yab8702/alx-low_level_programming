#include "main.h"
#include <stdlib.h>



/**
  * free_grid - deallocated Two D Array[Free momory]
  * @Two_D: Two D integer Array
  * @row: The row of the array
  */


void free_grid(int **Two_D, int row)
{
	int i;

	for (i = 0; i < row; i++)
		free(*(Two_D + i));
	free(Two_D);
}
