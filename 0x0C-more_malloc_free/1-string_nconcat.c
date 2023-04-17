#include"main.h"
#include <stdlib.h>


/**
 * string_nconcat - concatenate two string
 * @str1: the first string
 * @str2: the second string
 * @num: number of byte to concatenate
 * Return: pointer to @str1_nbyte_str2 | NULL(Failed)
 */



char *string_nconcat(char *str1, char *str2, unsigned int num)
{
	char *new_str;
	unsigned int i, j, len1 = 0, len2 = 0;

	while (str1 && str1[len1] != '\0')
		len1++;
	while (str2 && str2[len2] != '\0')
		len2++;
	if (num < len2)
		new_str = malloc((len1 + num + 1) * sizeof(char));
	else
		new_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(new_str + i) = *(str1 + i);
	for (j = 0; (num < len2 && i < (len1 + num)); i++, j++)
		*(new_str + i) = *(str2 + j);
	while (num >= len2 && i < (len1 + len2))
		new_str[i++] = str2[j++];
	*(new_str + i) = '\0';
	return (new_str);
}
