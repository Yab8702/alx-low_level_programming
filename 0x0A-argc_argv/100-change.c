#include <stdio.h>
#include <stdlib.h>



/**
 * main - print the minimum number of coin[ change the amount of money]
 * @argc: number of command line argument
 * @argv:hold the number of argument
 * Return: Always 0 (success) | 1  Error
 */


int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int cents, i, counter = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	for (i = 0; i < 5 && cents >= 0; i++)
	{
		while (cents >= coins[i])
		{
			counter++;
			cents -= coins[i];
		}
	}
	printf("%d\n", counter);
	return (0);
}


