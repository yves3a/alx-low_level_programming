#include "function_pointers.h"

/**
 * int_index - it searches for an interger
 * @array: an array of interger where to search from
 * @size: The size of the array.
 * @cmp: the function pointer
 * Return: index of the first element where cmp
 *	does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{

		if (cmp(array[i]) != 0)
		{
			return (i);
		}

	}
	return (-1);
}
