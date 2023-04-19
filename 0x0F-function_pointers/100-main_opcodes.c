#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints  opcodes of its own main function
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: Always 0 (Success) | Error (2 | 1)(Failed)
 */


int main(int argc, char *argv[])
{
	char *a;
	int bt, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bt = atoi(argv[1]);

	if (bt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	a = (char *)main;

	while (i < bt)
	{
		if (i == (bt - 1))
		{
			printf("%02hhx\n", *(a + i));
			break;
		}
		printf("%02hhx ", *(a + i));
		i++;
	}
	return (0);
}
