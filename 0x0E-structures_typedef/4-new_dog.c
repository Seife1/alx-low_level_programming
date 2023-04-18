#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - return the length of the string
 * @str: The string to be...
 * Return: the length
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcpy - copy from src to dest
 * @dest: Store the string copy
 * @src: The source
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: The new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mechal;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	mechal = malloc(sizeof(dog_t));
	if (mechal == NULL)
		return (NULL);
	mechal->name = malloc(sizeof(char) * (_strlen(name)) + 1);
	if (mechal->name == NULL)
	{
		free(mechal);
		return (NULL);
	}

	mechal->owner = malloc(sizeof(char) * (_strlen(owner)) + 1);
	if (mechal->owner == NULL)
	{
		free(mechal->name);
		free(mechal);
		return (NULL);
	}

	mechal->name = _strcpy(mechal->name, name);
	mechal->age = age;
	mechal->owner = _strcpy(mechal->owner, owner);

	return (mechal);
}
