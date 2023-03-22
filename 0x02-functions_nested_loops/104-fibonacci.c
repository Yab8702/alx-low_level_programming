#include <stdio.h>

/**
 * main- prints the first 98 Fibonacci number
 *
 * Return:  Always 0(Success)
 */


int main(void)
{
	unsigned long int x, feb0 = 1, aft = 2;
	unsigned long int l = 1000000000, feb1, feb2, aft1, aft2;

	printf("%lu", feb0);

	for (x = 1; x < 91; x++)
	{
		printf(", %lu", aft);
		aft += feb0;
		feb0 = aft - feb0;
	}

	feb1 = (feb0 / l);
	feb2 = (feb0 % l);
	aft1 = (aft / l);
	aft2 = (aft % l);

	for (x = 92; x < 99; ++x)
	{
		printf(", %lu", aft1 + (aft2 / l));
		printf("%lu", aft2 % l);
		aft1 = aft1 + feb1;
		feb1 = aft1 - feb1;
		aft2 = aft2 + feb2;
		feb2 = aft2 - feb2;
	}
	printf("\n");
	return (0);
}
