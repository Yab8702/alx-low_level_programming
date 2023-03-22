#include <stdio.h>

/**
 * main - print the first 98 fibonacci number
 * Return: Always 0(sucess)
 */

int main(void)
{
	int x;
	unsigned long int fib1 = 1, fib2 = 1, fib3;

	printf("%lu, ", fib1);
	for (x = 1; x < 98; x++)
	{
		fib3 = fib1 + fib2;
		printf("%lu", fib3);
		fib1 = fib2;
		fib2 = fib3;
		if (x < 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
