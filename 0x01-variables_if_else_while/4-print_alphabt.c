#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0.
 */

int main(void)
{
	int i;

	/*Print all the alphabet letters except e and q*/

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i == 'e' || i == 'q')
		continue;
	putchar(i);
	}
	putchar('\n');
	return (0);
}
