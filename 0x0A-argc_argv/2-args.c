#include <stdio.h>

/**
 * main - Entry point
 * @argc: arguments number
 * @argv: argunments
 * Return: Always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
