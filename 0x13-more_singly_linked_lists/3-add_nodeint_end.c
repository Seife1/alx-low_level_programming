#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - at the end
 * @head: the name exsting node
 * @n: new node
 * Return: NULL or Address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Create a link */
	listint_t *new_end, *tmp;

	new_end = malloc(sizeof(listint_t));
	if (!new_end)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new_end;

	return (new_end);
}
