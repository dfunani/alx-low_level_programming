#include "dog.h"

/**
 * free_dog - free malloc of dog obj
 * @d: dog to free
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		return;
	}
	free(d->owner);
	free(d->name);
	free(d);
}
