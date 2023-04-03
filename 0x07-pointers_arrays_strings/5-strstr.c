#include "main.h"


/**
  * _strstr - locate a substring
  * @haystack:the string to be searched
  * @needle: the substring to be found
  * Return:@needle(success) else NULL
  */


char *_strstr(char *haystack, char *needle)
{
	int n_len = 0, counter = 0, i, j;


	while (needle[n_len] != '\0')
		n_len++;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			j++;
			counter = 1;
			while (needle[j] && haystack[i + j] == needle[j])
			{
				counter++;
				j++;
			}
			if (counter == n_len)
				return (haystack + i);

		}
		counter = 0;
	}
	return (0);
}
