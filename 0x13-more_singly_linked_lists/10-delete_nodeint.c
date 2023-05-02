#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t linked list
 * @head: pointer of pointer to head
 * @index:  index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *tmp, *nxt;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		nxt = (*head)->next;
		free(*head);
		*head = nxt;
		return (1);
	}

	tmp = *head;
	for (x = 0; x < index - x; x++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}

	nxt = tmp->next;
	tmp->next = nxt->next;
	free(nxt);
	return (1);
}
