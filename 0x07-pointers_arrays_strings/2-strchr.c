#include "main.h"

/**
  * _strchr - locates a character in a string
  * @str: string
  * @c:the character
  * Return: c-@str(success) else NULL
  */



char *_strchr(char *str, char c)
{
	int i;

	for (i = 0; str[i] >= '\0'; i++)
	{
		if (str[i] == c)
			return (str + i);
	}
	return (0);
}
