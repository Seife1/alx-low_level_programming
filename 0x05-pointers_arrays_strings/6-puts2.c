#include "main.h"

/**
 * puts2 - print every other character
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
