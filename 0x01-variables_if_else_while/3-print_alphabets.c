#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0.
 */

int main(void)
{
	int i, j;
	/* print lowercase alphabet*/

	for (i = 'a'; i <= 'z'; i++)
	{
	putchar(i);
	}
	/* print uppercase alphabet*/

	for (j = 'A'; j <= 'Z'; j++)
	{
	putchar(j);
	}
	putchar('\n');

	return (0);
}
