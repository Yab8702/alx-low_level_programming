#include "main.h"

/**
 * _atoi - convert string to integer
 * @str: string
 * Return: integer
 */

int _atoi(char *str)
{
	long int result = 0;
	int len = 0, sign = 1, i, j;

	while (str[len] != '\0') /* get the length of string*/
		len++;
	/* ignoring whitspace and check for sign*/
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ' || str[i] == '+')
			continue;
		else if (str[i] == '-')
			sign *= -1;
		else if (str[i] >= '0' && str[i] <= '9')
			break;
	}
	/* converting string to integer */

	for (j = 0; j < len; j++)
	{
		if (str[j] >= '0' && str[j] <= '9')
			result = result * 10 + (str[j] - '0');
		else if ((j > 0) && (str[j - 1] >= '0' && str[j - 1] <= '9') &&
			 !(str[j] >= '0' && str[j] <= '9'))
		{
			break;
		}
		else
			continue;
	}
	return (sign * result);
}
