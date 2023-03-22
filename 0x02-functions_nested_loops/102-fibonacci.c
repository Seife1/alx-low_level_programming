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
		printf("%lu, ", (unsigned long)sum);
	}
	printf("\n");
	return (0);
}
