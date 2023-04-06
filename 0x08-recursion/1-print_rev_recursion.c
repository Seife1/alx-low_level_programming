#include "main.h"

/**
 * _print_rev_recursion - string in reverse order
 * @s: String
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	/* base case  */
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		return;
	}
}
