#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - adds a positeve number
 * @argc: number of command line argument
 * @argv:hold the number of argument
 * Return: Always 0 (success) | 1 Error
 */


int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (check_digit(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
/**
 * check_digit - check digits or not
 * @str: string to check
 * Return: 1 @str_is digit| 0 not digit
 */

int check_digit(char *str)
{
	while (strlen(str))
	{
		if (isdigit(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}

