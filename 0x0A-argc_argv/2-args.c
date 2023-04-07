#include <stdio.h>


/**
 * main - print all arguments it recieves
 * @argc: number of command lne argument
 * @argv: hold the number of argument
 * Return: Always 0 (success)
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
