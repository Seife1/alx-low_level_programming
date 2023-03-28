#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	i = 208;
	printf("i=%d\n", i);
	reset_to_98(&i);
	printf("i=%d\n", i);
	return (0);
}
