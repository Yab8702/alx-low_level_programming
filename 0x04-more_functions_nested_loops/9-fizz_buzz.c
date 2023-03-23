#include <stdio.h>

/**
 * main - the "Fizz-Buzz test"
 * Return: Always 0(sucess)
 */

int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			if (count % 3 == 0)
				printf("Fizz");
			else if (count % 5 == 0)
				printf("Buzz");
			else
				printf("%d", count);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
