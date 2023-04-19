#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - simple calculator
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0(sujccess) | Error(98 | 99 | 100)
 */


int main(int argc, char *argv[])
{
	int a, b, result;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];
	if (get_op_func(s) == NULL || *(s + 1) != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*s == '/' && b == 0) || (*s == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result  = get_op_func(s)(a, b);
	printf("%d\n", result);
	return (0);
}
