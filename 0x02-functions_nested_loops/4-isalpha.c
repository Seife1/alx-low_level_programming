#include "main.h"

/**
 *_isalpha - check the lowercase and uppercase
 * Return: Always 1.
 * @c: character to be checked
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
	return (1);
	}
	return (0);
}
