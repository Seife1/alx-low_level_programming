#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print num
 * @separator: string print
 * @n: number
 * @....: other arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *strng;
	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		strng = va_arg(str, char *);

		if (strng == NULL)
			printf("(nil)");
		else
			printf("%s", strng);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(str);
}
