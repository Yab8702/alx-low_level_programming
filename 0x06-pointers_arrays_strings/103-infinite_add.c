#include "main.h"

/**
  * reverse - reverse the string
  * @s: the string to reverse
  */

void reverse(char *s)
{
	int i = 0, j = 0;
	char rev;

	while (s[i] != '\0')
		i++;
	i--;
	for (j = 0; j < i; j++, i--)
	{
		rev = s[j];
		s[j] = s[i];
		s[i] = rev;
	}
}

/**
  * infinite_add- adding two number and stored in buffer
  * @num1: the first number
  * @num2: the second number
  * @buffer: the buffer
  * @size_b: the size of buffer
  * Return:the buffer(success)
  * On error return 0
  */
char *infinite_add(char *num1, char *num2, char *buffer, int size_b)
{
	int i = 0, j = 0;
	int digit1 = 0, digit2 = 0, sum = 0, index = 0;
	int carry = 0;

	while (num1[i] != '\0')
		i++;
	while (num2[j] != '\0')
		j++;
	if (--j >= size_b || --i >= size_b)
		return (0);
	while (j >= 0 || i >= 0 || carry == 1)
	{
		if (i < 0)
			digit1 = 0;
		else
			digit1 = num1[i] - '0';
		if (j < 0)
			digit2 = 0;
		else
			digit2 = num2[j] - '0';
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		if (index >= (size_b - 1))
			return (0);
		buffer[index] = (sum % 10) + '0';
		index++;
		j--;
		i--;
	}
	if (index == size_b)
		return (0);
	buffer[index] = '\0';
	reverse(buffer);
	return (buffer);
}
