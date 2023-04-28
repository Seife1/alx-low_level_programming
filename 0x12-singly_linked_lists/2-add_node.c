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
 * add_node - at the beginning
 * @head: the name exsting node
 * @str: new node
 * Return: NULL or Address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	/* Create a link */
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	/* Point to old first node */
	new->next = *head;
	/* point head to new node */
	*head = new;

	return (new);
}
