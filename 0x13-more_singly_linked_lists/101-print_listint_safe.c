#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * re -  realocate memory for an array of pointer
 * @s: size of new list > old list always
 * @list: old list
 * @new: new node to be add to the list
 * Return: pointer to the new list
 */

const listint_t **re(const listint_t **list, size_t s, const listint_t *new)
{
	const listint_t **newLst;
	size_t size;

	newLst = malloc(s * sizeof(listint_t *));
	if (newLst == NULL)
	{
		free(list);
		exit(98);
	}
	for (size = 0; size < s - 1; size++)
		newLst[size] = list[size];
	newLst[size] = new;
	free(list);
	return (newLst);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer
 * Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t i, n = 0;
	const listint_t **lst = NULL;

	while (!head)
	{
		for (i = 0; i < n; i++)
		{
			if (head == lst[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(lst);
				return (n);
			}
		}
		n++;
		lst = re(lst, n, head);
		printf("-> [%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(lst);
	return (n);
}
