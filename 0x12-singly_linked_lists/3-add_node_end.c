#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - length of the string
 * @s: char
 * Return: length
 */

int _strlen(const char *s)
{
	int index = 0;

	while (s[index] != '\n')
		index++;
	return (index);
}

/**
 * add_node_end - at the end
 * @head: the name exsting node
 * @str: new node
 * Return: NULL or Address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/* Create a link */
	list_t *new_end, *tmp;

	if (str == NULL)
		return (NULL);
	new_end= malloc(sizeof(list_t));
	if (new_end == NULL)
		return (NULL);

	new_end->str = strdup(str);
	if (new_end->str == NULL)
	{
		free(new_end);
		return (NULL);
	}

	new_end->len = _strlen(new_end->str);
	/* Point to old first node */
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
