#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - funtion that allocates memory
 * @b: size of the memory.
 * Return: a pointer ptr when sucessfull execution
 *         otherwise if it fails should exit 98.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
