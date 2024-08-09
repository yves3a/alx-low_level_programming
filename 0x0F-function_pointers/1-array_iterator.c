#include "function_pointers.h"

/**
 * array_iterator - executes the function given as parameter
 *		on each element ofan array.
 * @array: the array to be iterated on.
 * @size: size of that array.
 * @action: A pointer to the function to be executed.
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL || action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
		return;
}
