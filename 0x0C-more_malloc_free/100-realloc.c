#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * _realloc - it reallocates a memory block using malloc and free
 * @ptr: a pointer to the old size
 * @old_size: bytes of the allocated space for ptr
 * @new_size: bytes of the new memory block
 * Return: - pointer when new_size == old_size
 *         - NULL when new_size = 0 and ptr is no NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr != NULL)
	{
		memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
		free(new_ptr);
	}

	return (new_ptr);



}
