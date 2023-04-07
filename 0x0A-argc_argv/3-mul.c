#include <stdio.h>
#include <stdlib.h>


/**
 * main - multiply two numbers
 * @argc: number of command line argument
 * @argv: hold the number of argument
 * Return: Always 0 (success) | 1 Error
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		mul *= atoi(argv[i]);
	printf("%d\n", mul);
	return (0);
}
