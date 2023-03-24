#include <stdio.h>
#include "main.h"

/**
 * print_line - print a straight line
 * @n: number of _ character printed
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n <= 0)
			putchar('\n');
		else
		{
			putchar('_');
		}
		i++;
	}
	putchar('\n');
}
