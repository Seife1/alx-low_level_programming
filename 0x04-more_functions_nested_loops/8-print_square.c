#include "main.h"

/**
 * print_square - print square matrix
 * @size: n x n matrices
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
