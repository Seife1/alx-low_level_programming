#include <stdio.h>

/**
 * _isdigit - Detect one digit numbers
 *
 * @c: check for numbers
 *
 * Return: Success 1.
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
