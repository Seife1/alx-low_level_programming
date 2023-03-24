#include "main.h"

/**
 * print_diagonal - print \ diagonally
 *
 * @n: the number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
	for (j = 2; j <= i; j++)
		_putchar(' ');
	_putchar('\\');
	_putchar('\n');
	}
	_putchar('\n');
}
