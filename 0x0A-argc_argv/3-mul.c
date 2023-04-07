#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments it should be 2
 * @argv: argunments
 * Return: Always
 */

int main(int argc, char *argv[])
{
	int v = 0;
	int u = 0;

	if (argc == 3)
	{
		v = atoi(argv[1]);
		u = atoi(argv[2]);

		printf("%d\n", u * v);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
