#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated for a structure dog
 * @d: structure of  dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
