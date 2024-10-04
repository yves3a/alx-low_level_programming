#include "lists.h"

/**
 * dlistint_len - it returns the  number of elements of list
 * @h: a pointer to a first node
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count;

	for (count = 0; ptr != NULL; count++)
	{
		ptr = ptr->next;
	}

	return (count);
}
