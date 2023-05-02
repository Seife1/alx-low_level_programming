#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add anew node
 * @head: pointer of pointer
 * @n:node to be add
 * Return: Added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Create a link */
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	/* Point to old first node */
	new->next = *head;
	/* point head to new node */
	*head = new;

	return (new);
}
