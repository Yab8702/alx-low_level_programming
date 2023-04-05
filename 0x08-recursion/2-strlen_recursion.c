#include "main.h"


/**
  * _strlen_recursion - return the length of string
  * @str:string
  * Return: @len(success);
  */



int _strlen_recursion(char *str)
{
	int len = 0;

	if (*str)
	{
		len++;
		len += _strlen_recursion(str + 1);
	}
	return (len);
}
