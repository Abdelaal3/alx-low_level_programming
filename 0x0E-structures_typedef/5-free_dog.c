#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - this is the frees memory allocated
 * @d: struct dog to free
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
