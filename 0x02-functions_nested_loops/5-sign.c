#include "main.h"

/**
 * print_sign - print the sign of the number
 * @n: Check the number
 * Return:0 zero, 1 positive, -1 negative
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
