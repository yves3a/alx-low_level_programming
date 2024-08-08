#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - it frees dogs
 * @d: the dog to be freed
 */

void free_dog(dog_t *d)
{
	/*freeing the allocated memory address */

	if (d != NULL)
	{
		free(d);
	}
	if (d->name != NULL)
	{
		free(d->name);
	}

	if (d->owner != NULL)
	{
		free(d->owner);
	}
	else
	{
		return;
	}
}
