#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0.
 */

int main(void)
{
	int sum, k = 1, j, i = 0;

	for (j = 1; j <= 50; j++)
	{
		sum = i + k;
		i = k;
		k = sum;
		if ((unsigned long)sum <= 4000000 && (unsigned long)sum % 2 == 0)
		{
			printf("%lu\n", (unsigned long)sum);
		}
	}
	return (0);
}
