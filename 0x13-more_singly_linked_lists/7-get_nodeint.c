#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node
 * @head: Pointer to head
 * @index: the index of the node
 * Return: NULL if no node || Node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;
	listint_t *tp = head;

	while (tp && node < index)
	{
		tp = tp->next;
		node++;
	}

	return (tp ? tp : NULL);
}
