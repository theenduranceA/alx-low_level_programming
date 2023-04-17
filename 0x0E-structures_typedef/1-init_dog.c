#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Function that initialize a variable.
 * @d: A pointer to struct dog.
 * @name: Name of the Dog.
 * @age: Age of the Dog.
 * @owner: Owner of the Dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)

	d->name = name;
	d->age = age;
	d->owner = owner;
}
