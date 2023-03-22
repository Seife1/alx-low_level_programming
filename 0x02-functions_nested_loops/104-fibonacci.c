#include <stdio.h>

/**
 * Fibonachi - prints the first 98 Fibonacci numbers
 * main - Entry point
 * Return: Always 0.
 */

int Fibonachi(void)
{
	int sum, k = 1, j, i = 1;

	for (j = 1; j <= 98; j++)
	{
		sum = i + k;
		i = k;
		k = sum;
		printf("%d, ", sum);
	}
	printf("\n");
	return (0);
}

int main(void)
{
	Fibonachi();
	return (0);
}
