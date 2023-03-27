#include "main.h"

/**
 * _atoi - convert string to integer
 * @str: string
 * Return: integer
 */

int _atoi(char *str)
{
        int result = 0, len = 0, j = 0, w = 0, d =0, num;

	while (str[len] != '\0') /* get the length of string*/
		len++;
	/* converting string to integer */

	while (j < len && w == 0)
	{
		if (str[j] == '-')
			++d;
		if (str[j] >= '0' && str[j] <= '9')
		{
			num = str[j] - '0';
			if (d % 2)
				num *= -1;
			result = result * 10 + num;
			w = 1;
			if (str[j + 1] < '0' || str[j + 1] > '9')
				break;
			w = 0;
		}
		j++;
	}
	if (w == 0)
		return (0);
	return (result);
}
