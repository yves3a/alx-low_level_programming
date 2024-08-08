#include "dog.h"
#include <stddef.h>

/**
 * init_dog - it initialises varibles of type struct dog
 * @d: a pointer to the structure variable
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 * Return: always 0.
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
