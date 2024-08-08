#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - function that prints struct dog
 * @d: a pointer to a struct dog
 *
 * Return: always 0.
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == 0.0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

	if (d == NULL)
		return;

}
