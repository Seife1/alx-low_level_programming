#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
