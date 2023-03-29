#include "main.h"

/**
 * _strncat - concatenates two strs
 * @dest: First string
 * @src: second string to be appended to dest
 * @n: The number of byes appended
 * Return: char
 */


char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dlen = 0;

	while (dest[i++])
		dlen++;

	for (i = 0; src[i] && i < n; i++)
		dest[dlen++] = src[i];
	return (dest);
}
