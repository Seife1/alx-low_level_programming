#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * _re -  realocate memory for an array of pointer
 * @s: size of new list > old list always
 * @list: old list
 * @new: new node to be add to the list
 * Return: pointer to the new list
 */

listint_t **_re(listint_t **list, size_t s, listint_t *new)
{
	listint_t **newLst;
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
 * free_listint_safe - free a listint_t linked list
 * @h: pointer
 * Return: the number of nodes in the list
*/

size_t free_listint_safe(listint_t **h)
{
	size_t i, n = 0;
	listint_t **lst = NULL;
	listint_t *next;

	if (!h || !*h)
		return (n);
	while (!h)
	{
		for (i = 0; i < n; i++)
		{
			if (*h == lst[i])
			{
				*h = NULL;
				free(lst);
				return (n);
			}
		}
		n++;
		lst = _re(lst, n, *h);
		next = (*h)->next;
		free(*h);
		*h = next;
	}
	free(lst);
	return (n);
}
