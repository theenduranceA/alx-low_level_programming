#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function that frees a Dog.
 * @d: Pointer to dog_t
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

