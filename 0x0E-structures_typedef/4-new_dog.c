#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - a new struct dog
 * @name: a name of dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: NULL if function fails
 *	- a new dog type.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_name = (char *)malloc(sizeof(strlen(name)) + 1);
	if (new_name == NULL)
	{
		free(new_name);
		return (NULL);
	}

	new_owner = (char *)malloc(sizeof(strlen(owner)) + 1);
	if (new_owner == NULL)
	{
		free(new_owner);
		return (NULL);
	}

	strcpy(new_name, name);
	strcpy(new_owner, owner);

	new_dog->name = new_name;
	new_dog->owner = new_owner;
	new_dog->age = age;

	return (new_dog);

}
