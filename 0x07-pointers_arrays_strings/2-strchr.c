#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate a char in str
 * @s: pointer
 * @c: char
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
