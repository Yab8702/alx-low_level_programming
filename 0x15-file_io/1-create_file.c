#include "main.h"



/**
  * create_file - create files
  * @filename: filename
  * @text_content: terminating string to write to the file
  * Return: 1(success) | -1 (Failed)
  */

int create_file(const char *filename, char *text_content)
{
	int file_des;
	int byte, len = 0;

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	file_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_des < 0)
		return (-1);
	byte = write(file_des, text_content, len);
	if (byte < 0)
		return (-1);
	close(file_des);
	return (1);
}

