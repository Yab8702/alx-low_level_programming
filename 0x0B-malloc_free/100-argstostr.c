#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenate cmd line arg
 * @arc: cmd line argument counter
 * @arv: hold cmd line argument
 * Return: pointer @new_str(success) | NULL(Failed)
 */
char *argstostr(int arc, char **arv)
{
	int i, j, k = 0, count = 0;
	char *new_str;

	if (arc == 0 || arv == NULL)
		return (NULL);
	for (i = 0; i < arc; i++)
	{
		for (j = 0; arv[i][j]; j++)
			count++;
	}
	new_str = malloc(sizeof(char) * (count + arc + 1));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < arc; i++)
	{
		for (j = 0; arv[i][j]; j++, k++)
			new_str[k] = arv[i][j];
		if (new_str[k] == '\0')
			new_str[k++] = '\n';
	}
	return (new_str);
}
