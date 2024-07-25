#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 Dimensional array of intergers/
 * @width: the number of columns
 * @height: number of rows
 * Return: - NULL when it fails
 *         - if the width, height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **ptr2D;
	int h_index;
	int w_index;

	if (height <= 0 || width <= 0)
		return (NULL);

	ptr2D = malloc(height * sizeof(int *));
	if (ptr2D == NULL)
		return (NULL);
	for (h_index = 0; h_index < height; h_index++)
	{

		ptr2D[h_index] = malloc(width * sizeof(int));

		if (ptr2D[h_index] == NULL)
		{
			for (; h_index >= 0; h_index--)
				free(ptr2D[h_index]);
			free(ptr2D);
			return (ptr2D);
		}
	}
	for (h_index = 0; h_index < height; h_index++)
	{
		for (w_index = 0; w_index < width; w_index++)
			ptr2D[h_index][w_index] = 0;
	}
	return (ptr2D);
}
