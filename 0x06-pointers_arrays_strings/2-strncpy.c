#include "main.h"

/**
 * _strncpy - copy at most an inputed number
 *
 * @dest: Buffer storing the string copy
 *
 * @src: the source string
 *
 * @n: max num copy
 *
 * Return: char
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, slen = 0;

	while (src[i++])
		slen++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = slen; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
