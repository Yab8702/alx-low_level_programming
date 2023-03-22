#include <stdio.h>

/**
 * main - print the sum of all of multiply of 3 and 5
 * Return: Always 0(sucess)
 */


int main(void)
{
	int count, sum = 0;
	
	for (count = 0; count < 1024; count++)
	{
		if (((count % 3) == 0) || ((count % 5) == 0))
			sum = sum + count;
	}
	printf("The sum of these multiples is %d\n", sum);
	return (0);
}
