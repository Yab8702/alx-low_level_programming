#include "main.h"



/**
  * read_textfile - read a text file and print on the screen
  * @filename: filename
  * @letters: number of letters
  * Return: the actual letter read and print
  */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	char *buffer;
	int byte;

	file_des = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL || file_des < 0)
		return (0);
	byte = read(file_des, buffer, letters);
	if (byte < 0)
		return (0);
	write(STDOUT_FILENO, buffer, byte);
	free(buffer);
	close(file_des);
	return (byte);
}
