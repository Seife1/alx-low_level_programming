#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of argunments
 * @argv: array
 * Return: int
 */

int main(int argc, char *argv[])
{
	int byt, i;
	char *arr;

	if (argc != 2)
	{
		printf("ERROR\n");
		exit(1);
	}

	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("ERROR\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < byt; i++)
	{
		if (i == byt - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
