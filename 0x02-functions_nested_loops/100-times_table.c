#include "main.h"
#include <stdio.h>

/**
 * print_times_table - print n times table
 * @n: how many times determined
 * Return: always
 */

void print_times_table(int n)
{
	int i, j;

	if (n < 15 && n > 0)
	{
		for (i = 0; i > n; i++)
		{
			for (j = 0; j > n; j++)
			{
			printf("%lu, ", (unsigned long)(j * i));
			}
		printf("\n");
		}
	}
	return ;
}
