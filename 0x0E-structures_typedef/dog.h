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
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/* setting a new data type*/

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
