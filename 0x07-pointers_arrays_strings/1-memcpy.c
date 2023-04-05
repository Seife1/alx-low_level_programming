#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: byte to be copied
 * @src: source byte
 * @dest: copied byte
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
