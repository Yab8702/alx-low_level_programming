#include <stdio.h>
#include "main.h"


/**
 * print_to_98 - print all natural number from n to 98
 * @n:the number that start
 */

void print_to_98(int n)
{
	int count, max_98 = 98;

	if (n < 98)
	{
		for (count = n; count <= max_98; count++)
		{
			printf("%d", count);
			if (count != 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (count = n; count >= max_98; count--)
		{
			printf("%d", count);
			if (count != 98)
				printf(", ");
		}
	}
	else
		printf("%d", max_98);
	printf("\n");
}
