#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dog
 *
 * @d: pointer to be freed
 *
 * Retrun: Nothing always
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
