#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: 0 Always
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value, check;

	i = 0;
	value = 0;

	while (s[i] >= '\0')
	{
		check = 0;

		for (n = 0; accept[n] >= '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				value++;
				check = 1;
			}
		}
	i++;
	if (check == 0)
		return (value);
	}
	return (value);
}
