#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms[fibonacci]
 * Return: Always 0(sucess)
 */


int main(void)
{
	long int  fib1 = 1, fib2 = 2, fib3, sum = fib2;
	int x;

	for (x = 0; x < 50; x++)
	{
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
		if (fib1 < 4000000)
		{
			if (fib3 % 2 == 0)
				sum = sum + fib3;
		}
	}
	printf("%ld", sum);
	return (0);
}
