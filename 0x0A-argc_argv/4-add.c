#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: agrunments
 * Return: always
 */

int main(int argc, int *argv[])
{
	int i, sum = 0;

	if ((argc - 1) == 0)
		printf("0\n");

	for (i = 0; i < argc; i++)
	{

		if (isdigit(argv[i]))
		{
			sum += atoi(argv[i]);
		}

		else
		{
			printf("Error\n");
			return (1);
		}

	}
	printf(sum);
	return (0);
}
