#include "main.h"

/**
 * _strlen - String length return
 * @s: character
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
