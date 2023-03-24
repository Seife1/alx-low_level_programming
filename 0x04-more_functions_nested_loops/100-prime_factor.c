#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
	/* Prime number is a number which is divisible by one and itself only*/
	long int n = 612852475143;
	long int maxf, divisor = 2;

	while (n != 0)
	{
	if (n % divisor != 0)
		divisor = divisor + 1;
	else
	{
		maxf = n;
		n = n / divisor;
		if (n == 1)
		{
			printf("%ld is the largest prime factor !", maxf);
			break;
		}
	}
	}
	printf("\n");
	return (0);
}
