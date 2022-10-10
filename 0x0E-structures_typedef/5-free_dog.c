#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function of dogs that are free
 * @d: freed dogs
 * Return: Void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
