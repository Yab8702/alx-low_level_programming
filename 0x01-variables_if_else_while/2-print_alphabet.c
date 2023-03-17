#include <stdio.h>
/**
 * main - Entry point[print alphabet]
 *
 * Return: Always 0(sucess)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet < = 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar("\n");
	return (0);
}
