#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - knowing the end of the first word
 * @str: the string to be searched
 * Return: Always
 */

int word_len(char *str)
{
	int i = 0;
	int len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * count_words - count the number of word within the string
 * @str: the string to be searched
 * Return: Always
 */

int count_words(char *str)
{
	int i = 0, len = 0, words = 0;

	for (i = 0; *(str + i); i++)
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += word_len(str + i);
		}
	}
	return (words);
}

/**
 * strtow - splits a string into words.
 * @str: string to be split
 * Return: Always
 */

char **strtow(char *str)
{
	char **s;
	int i = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;

		letters = word_len(str + i);
		s[w] = malloc(sizeof(char *) * (letters + 1));

		if (s[w] == NULL)
		{
			while (w >= 0)
			{
				free(s[w]);
				w--;
			}
			free(s);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			s[w][l] = str[i++];

		s[w][l] = '\0';
	}
	s[w] = NULL;
	return (s);
}
