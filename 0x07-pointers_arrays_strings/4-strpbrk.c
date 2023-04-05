#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - ssearch a string
 * @s: string
 * @accept: String
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
