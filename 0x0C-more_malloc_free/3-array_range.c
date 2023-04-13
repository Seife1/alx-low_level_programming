#include "main.h"
#include <stdlib.h>

/**
 * array_range - an array of integers
 * @min: minimum
 * @max: maximum
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *c, i = 0;

	if (min > max)
		return (NULL);

	c = malloc(sizeof(int) * (max - min) + sizeof(int));
	if (c == NULL)
		return (NULL);

	while (min <= max)
	{
		c[i] = min;
		i++;
		min++;
	}
	return (c);
}
