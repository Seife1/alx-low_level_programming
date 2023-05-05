#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if b isn't 1 or 0 || NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
			result = (result << 1) + (*b - '0');
		else
			return (0);
		b++;
	}
	return (result);
}
