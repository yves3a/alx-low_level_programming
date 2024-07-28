#include "main.h"
#include <stdlib.h>
/**
 * array_range - it creates array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: - NULL when min > max and malloc fails
 *         - pointer when successful
 */

int *array_range(int min, int max)
{

	int *ptr;
	int index;
	int size = max - min + 1;

	if (min > max)
		return (NULL);

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		ptr[index] = min++;

	return (ptr);

}
