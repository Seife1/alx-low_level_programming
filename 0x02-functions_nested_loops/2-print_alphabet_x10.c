#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i, j;

	/*Nested loop*/

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
