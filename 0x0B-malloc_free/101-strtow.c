#include "main.h"
#include <stdlib.h>

/**
  * word_count - counting words in @s
  * @s: string
  * Return: @count_words
  */

int word_count(char *s)
{
	int count_words = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			count_words++;
	}
	return (count_words);
}

/**
  * count_space - space checker
  * @st: string
  * Return: 0 has character | > 0(space)
  */

int count_space(char *st)
{
	int j = 0;

	while (st[j] != '\0')
	{
		if (st[j] != ' ')
		{
			j = 0;
			break;
		}
		j++;
	}
	return (j);

}

/**
  * strtow - splits a string into words.
  * @str: string
  * Return: @words(success) | NULL(Failed)
  */

char **strtow(char *str)
{
	char **words, *end;
	int i, j, len = 0, count_words = 1, spc;

	if (str == NULL || *str == '\0')
		return (NULL);
	spc = count_space(str);
	if (spc != 0)
		return (NULL);
	count_words += word_count(str);
	words = malloc(sizeof(char *) * (count_words + 1));
	if (words == NULL)
		return (NULL);
	words[count_words] = NULL;
	i = 0;
	while (*str != '\0')
	{
		while (*str == ' ')
			str++;
		end = str;
		while (*end != ' ' && *end != '\0')
			end++;
		len = end - str;
		if (len > 0)
		{
			words[i] = malloc(sizeof(char) * (len + 1));
			if (words[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			for (j = 0; j < len; j++)
				words[i][j] = str[j];
			words[i][len] = '\0';
			i++;
		}
		str = end;
	}
	return (words);
}
