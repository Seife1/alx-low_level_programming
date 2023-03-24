#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print a number from 0 to 14 ? times
 *
 * return: void
 */

void more_numbers(void)
{
	int i, j, u, v;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			u = j / 10;
			v = j % 10;
			if (j >= 10)
				putchar(u + '0');
			putchar(v + '0');
		}
		putchar('\n');
	}
}
