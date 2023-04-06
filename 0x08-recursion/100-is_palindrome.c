#include "main.h"


/**
  * is_palindrome - return if a string is palindrom or not
  * @str:the string
  * Return: 1 @str palindrome | 0 not
  */


int is_palindrome(char *str)
{
	if (*str == '\0')
		return (1);
	return (_palindrome(str, 0, _strlen(str) - 1));
}

/**
  * _strlen - calculate the length of the string
  * @str: string to calculate the length
  * Return: length of the string
  */

int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen(str + 1));
}


/**
  * _palindrome - check if the string is palindrome| not
  * @counter:counter to check palindrom | not
  * @length: @s length
  * @s: string
  * Return: 1 palindrom or 0 not to @_is_palindrome
  */

int _palindrome(char *s, int counter, int length)
{
	if (s[counter] != s[length])
		return (0);
	if (counter >= length)
		return (1);
	return (_palindrome(s, counter + 1, length - 1));
}

