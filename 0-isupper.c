#include <stdio.h>

/**
 * _isupper - Detect uppercase
 *
 * @c: check for upper character
 *
 * Return: Success 0.
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
