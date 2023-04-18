#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializing the variable of dog
 * @d: pointer
 * @name: name
 * @age: age
 * @owner: Owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
