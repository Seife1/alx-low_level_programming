#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - print all the elements of a list_t
 * @h: List name
 * Return: the # of nodes
 */

size_t print_listint(const listint_t *h)
{
	/**Assign a letter to count the number of nodes**/
	size_t c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
