#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer of pointer
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prvs, *nxt;

	if (*head == NULL || head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	prvs = NULL;
	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prvs;
		prvs = *head;
		*head = nxt;
	}
	*head = prvs;
	return (*head);
}
