#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: Pointer to head
 * Return: The sum || 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tp = head;

	while (tp)
	{
		/* tp => temporary storage  */
		sum += tp->n;
		tp = tp->next;
	}
	return (sum);
}
