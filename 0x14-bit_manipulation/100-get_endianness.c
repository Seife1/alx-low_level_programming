#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int n = 0x12345678;
	char *c = (char *)&n;

	if (*c == 0x78)
		return (1);
	else
		return (0);
}
