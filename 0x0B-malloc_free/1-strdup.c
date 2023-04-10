#include "main.h"
#include <stdlib.h>


/**
  * _strdup - copy the string of the parameter given
  * @str: the string
  * Return: pointer to the duplicated string(success) | NULL(Failed)
  */


char *_strdup(char *str)
{
	char *chr;
	int len = 0, i;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	chr = malloc(sizeof(char) * (len + 1));

	if (chr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		*(chr + i) = *(str + i);
	return (chr);
}
