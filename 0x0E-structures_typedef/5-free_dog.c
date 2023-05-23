#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free memory allocated for a struct dog
 * @d: Struct dog for free
 *
 * Return: Nothing
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
