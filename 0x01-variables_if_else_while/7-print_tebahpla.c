#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0.
 */

int main(void)
{
	int i;
	/*Print all alphabet letter in REVERSE order*/

	for (i = 'z'; i >= 'a'; i--)
	{
	putchar(i);
	}
	/*Print new line*/
	putchar('\n');
	return (0);
}
