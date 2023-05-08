#include "main.h"



/**
  * cls - close files
  * @file_des: files disciptor
  */

void cls(int file_des)
{
	int c = close(file_des);

	if (c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_des);
		exit(100);
	}
}

/**
  * main - copies a content of file to anothe file
  * @argc: argument count
  * @argv: argument vector
  * Return: 0(success)
  */


int main(int argc, char **argv)
{
	int file_des1, file_des2;
	int byte, wrt;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_des1 = open(argv[1], O_RDONLY);
	byte = read(file_des1, buffer, sizeof(buffer));
	file_des2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_des1 < 0 || byte < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	wrt = write(file_des2, buffer, byte);
	if (file_des2 < 0 || wrt < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	cls(file_des1);
	cls(file_des2);
	return (0);
}
