#include <stdio.h>

/**
 * main - largest prime fator
 * Return: Always 0(success)
 */


int main(void)
{
	long int factor, num = 612852475143;

	while (num % 2 == 0)
		num = num / 2;

	for (factor = 3; factor * factor <= num; factor += 2)
	{
		while (num % factor == 0)
			num = num / factor;
	}
	if (num > 2)
		printf("%ld\n", num);

	return (0);
}
