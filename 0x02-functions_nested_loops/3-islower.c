#include "main.h"

/**
 *_islower - check the lowercase
 * Return: Always 1.
 * @c: character to be checked
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
