#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len - # of elements in a linked list
 * @h: name of elements
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	/*COUNTER -> c*/
	int c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
