#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	size_t len, add, i, b;
	char c[] = "-ACHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3QlarPhdKIouk";
	char pass[7];

	len = strlen(argv[1]);
	pass[0] = c[(len ^ 59) & 63];
	for (i = 0, add = 0; i < len; i++)
		add += argv[1][i];
	pass[1] = c[(add ^ 79) & 63];
	for (i = 0, b = 1; i < len; i++)
		b *= argv[1][i];
	pass[2] = c[(b ^ 85) & 63];
	for (b = argv[1][0], i = 0; i < len; i++)
		if (b <= argv[1][i])
			b = argv[1][i];
	srand(b ^ 14);
	pass[3] = c[rand() & 63];
	for (b = 0, i = 0; i < len; i++)
		b += argv[1][i] * argv[1][i];
	pass[4] = c[(b ^ 239) & 63];
	for (b = 0, i = 0; i < argv[1][0]; i++)
		b = rand();
	pass[5] = c[(b ^ 229) & 63];
	pass[6] = '\0';
	printf("%s\n", pass);
	return (0);
}
