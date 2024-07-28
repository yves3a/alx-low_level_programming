#include <stdlib.h>
#include "main.h"
#include <string.h>


/**
 * _calloc - it allocates memory for an array using malloc
 * @nmemb: an array
 * @size: bytes of an array
 * Return: pointer when successfully
 *        - NULL when size or nmemb is 0 and when it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	/*set the memory to 0*/

	memset(ptr, 0, nmemb * size);

	return (ptr);

}
