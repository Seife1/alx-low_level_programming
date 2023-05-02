#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer of pointer to head
 * @idx: new node added here
 * @n: node to be added
 * Return: the address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *tmp, *new_node;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		tmp = *head;
		for (x = 0; x < idx - 1 && tmp != NULL; x++)
			tmp = tmp->next;

		if (tmp == NULL)
			return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node = *head;
		*head = new_node;
		return (new_node);
	}
	new_node = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
