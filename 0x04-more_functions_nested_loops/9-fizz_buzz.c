#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		/*Multiples of both 3 and 5*/

		if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz ");

		/*Multiples of 5*/

		else if (i % 5 == 0)
			printf("Buzz ");

		/*Multiples of 3*/

		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
