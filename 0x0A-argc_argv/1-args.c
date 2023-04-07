#include <stdio.h>

/**
 * main - count number of argument passed except programe name
 * @argc: number of command line argument
 * @argv: hold the number of argument
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, counter = 0;
	(void) argv;
	for (i = 1; i < argc; i++)
		counter++;
	printf("%d\n", counter);
	return (0);
}
