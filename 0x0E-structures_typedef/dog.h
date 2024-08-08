#ifndef DOG_H
#define DOG_H

/**
 * File: Header file
 * Desc: this the header file that all the prototypes used in this projects
 *	- it also defines the new function struct dog
 */

/**
 * struct dog - A new structure describing a dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 */

struct dog
{
	char *name[20];
	float age;
	char *owner[20];
} my_dog;

#endif
