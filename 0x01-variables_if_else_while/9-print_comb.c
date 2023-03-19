#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0.
 */

int main(void)
{
	int i;

	/*Print a number separated by comma*/

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	if (i == '9')
		break;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
