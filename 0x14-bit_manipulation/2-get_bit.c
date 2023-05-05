#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number (integer)
 * @index: index
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= 8 * sizeof(unsigned long int))
		return (-1);
	return ((n & mask) != 0);
}
