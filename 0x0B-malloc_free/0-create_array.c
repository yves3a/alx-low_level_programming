#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of
 *                chars and intitializes it with specific char.
 * @size: size of the array
 * @c: charcters to be filled
 * Return: null if size = 0, otherwise pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int index;

	ptr = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	 ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
	{
		ptr[index] = c;
	}
	return (ptr);

}
