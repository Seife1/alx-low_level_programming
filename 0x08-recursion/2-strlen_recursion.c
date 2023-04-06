#include "main.h"

/**
 * _strlen_recursion - length of the string
 * @s: string
 * Return: Always 1.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
