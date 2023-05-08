#include "main.h"



/**
  * append_text_to_file - append text at the end of a file
  * @filename: filename
  * @text_content: terminating string to add at the end of the file
  * Return: 1(success) | -1(Failed)
  */


int append_text_to_file(const char *filename, char *text_content)
{
	int file_des;
	int byte, len = 0;

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	file_des = open(filename, O_WRONLY | O_APPEND);

	if (file_des < 0)
		return (-1);
	byte = write(file_des, text_content, len);
	if (byte < 0)
		return (-1);
	return (1);
}
