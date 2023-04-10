#include "main.h"
#include <stdlib.h>


/**
  * str_concat - concatenates two string
  * @str1: the first string
  * @str2: the second string
  * Return: poiinter to @new_str | NULL(Failed)
  */


char *str_concat(char *str1, char *str2)
{
	char *new_str;
	int i, j, len1 = 0, len2 = 0;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";
	while (str1[len1] != '\0')
		len1++;
	while (str2[len2] != '\0')
		len2++;
	new_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(new_str + i) = *(str1 + i);
	for (j = 0; j <= len2; j++, i++)
		*(new_str + i) = *(str2 + j);
	return (new_str);
}
