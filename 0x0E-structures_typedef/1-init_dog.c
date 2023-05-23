#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initialize a dog structure
 * @d: A dog structure.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner name.
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
