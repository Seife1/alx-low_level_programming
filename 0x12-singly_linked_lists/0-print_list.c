#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - print all the elements of a list_t
 * @h: List name
 * Return: the # of nodes
 */

size_t print_list(const list_t *h)
{
	/**Assign a letter to count the number of nodes**/
	int c = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		c++;
		h = h->next;
	}
	return (c);
}
