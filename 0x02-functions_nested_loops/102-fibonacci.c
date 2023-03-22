#include <stdio.h>

/**
 * main - the first 50 fibonacci number
 * Return:Always 0(sucess)
 */

int main(void)
{
	int x;
	long int fib1 = 1, fib2 = 1, fib3;

	printf("%ld, ", fib2);
	for (x = 1; x < 50; x++)
	{
		fib3 = fib1 + fib2;
		printf("%ld", fib3);
		fib1 = fib2;
		fib2 = fib3;
		if (x < 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
