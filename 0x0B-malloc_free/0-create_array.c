#include "main.h"
#include <stdlib.h>


/**
  * create_array - create an array of char [intialize @chr]
  * @size:the size of the array
  * @ch: the character
  * Return:array of pointer(success) | Null(Failed)
  */


char *create_array(unsigned int size, char ch)
{
	unsigned int i;
	char *chr;

	chr = malloc(sizeof(char) * size);

	if (size == 0 || chr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(chr + i) = ch;
	return (chr);
}
