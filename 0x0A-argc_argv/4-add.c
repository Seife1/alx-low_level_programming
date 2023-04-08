#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: agrunments
 * Return: always
 */

int main(int argc, char *argv[])
{
	int num, i, j, sum = 0;

	/* No argunments passed? */
	if ((argc - 1) == 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		/**
		 * Using a 2D array to store the command-line arguments allows us to
		 * access each character in each argument using nested loops
		 */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	num = atoi(argv[i]);
	/* Check if the number is positive */
	if (num <= 0)
		continue;
	sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
