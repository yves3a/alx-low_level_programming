#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dlistint - a function that returns a number ofthe project
 * @h: a pointer to the first node
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t index;
	const dlistint_t *ptr;

	ptr = h;

	for (index = 0; ptr != NULL; index++)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (index);
}
