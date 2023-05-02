#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Delete the head node
 * @head: Pointer of pointer
 * Return: The rest || if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	*head = tmp->next;
	num = tmp->n;

	return (num);
}
