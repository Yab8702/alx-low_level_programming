#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/**
  * error - handle errors
  */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
  * is_num - check wheather number or not
  * @s: string to check
  * Return: 1 (digit) | 0 (not digit)
  */

int is_num(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

/**
  * multiply - multiply two numbers
  * @n1: the first number
  * @n2: the second number
  */


void multiply(char *n1, char *n2)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int *result = malloc(sizeof(int) * (len1 + len2));
	int i, j, digit1, digit2, prod, pos1, pos2, sum;

	if (!result)
		return (1);
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			digit1 = n1[i] - '0';
			digit2 = n2[j] - '0';
			prod = digit1 * digit2;
			pos1 = i + j;
			pos2 = i + j + 1;
			sum = prod + result[pos2];
			result[pos2] = sum % 10;
			result[pos1] += sum / 10;
		}
	}
	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;
	if (i == len1 + len2)
	{
		_putchar('0');
		_putchar('\n');
	}
	else
	{
		for (; i < len1 + len2; i++)
			_putchar(result[i] + '0');
		_putchar('\n');
	}
	free(result);
}

/**
  * main - Entry point
  * @argc: argument counter
  * @argv: argument vector
  * Return: 0(success)
  */
int main(int argc, char **argv)
{
	char *num1 = argv[1];
	char *num2 = argv[2];

	if (argc != 3)
		error();
	if (!is_num(num1) || !is_num(num2))
		error();
	multiply(num1, num2);
	return (0);
}
