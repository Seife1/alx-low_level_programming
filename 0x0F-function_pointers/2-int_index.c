#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - search for integer
 * @array: array
 * @size: the number of elements in the array
 * @cmp: Pointer to function used to compare
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);

	}
	return (-1);
}
