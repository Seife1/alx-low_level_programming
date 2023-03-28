#include "main.h"

/**
 * swap_int - Swap the value of two integers
 *
 * @a: int one
 *
 * @b: int two
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
