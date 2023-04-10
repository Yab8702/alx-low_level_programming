#include "main.h"
#include <stdlib.h>


/**
  * alloc_grid - create two dimensional array of integer
  * @row: the row of array
  * @col: the column of array;
  * Return: pointer of two D(suceess) | NULL(Failed)
  */


int **alloc_grid(int col, int row)
{
	int **Two_D;
	int i, j;

	if (row <= 0 || col <= 0)
		return (NULL);
	Two_D = malloc(sizeof(int *) * row);
	if (Two_D == NULL)
		return (NULL);

	for (i = 0; i < row; i++)
	{
		*(Two_D + i) = malloc(sizeof(int) * col);

		if (*(Two_D + i) == NULL)
		{
			for (j = 0; j < i; j++)
				free(*(Two_D + j));
			free(Two_D);
			return (NULL);
		}
	}

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			Two_D[i][j] = 0;
	}

	return (Two_D);
}
