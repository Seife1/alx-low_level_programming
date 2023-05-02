#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * listint_len - # of elements in a linked list
 * @h: name of elements
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	/*COUNTER -> c*/
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
