#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a node at a position
 * @h: a pointer to apointer to the first node
 * @idx: a certain position where to insert a node
 * @n: a new node value
 *
 * Return: a pointer to the new node, otherwise NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *temp, *temp2, *new;
	unsigned int position = 0;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	temp = *h;/* Initialize temp to point to the head */

	/* Traverse the list to find the node at index idx - 1 */
	while (temp != NULL && position < idx - 1)
	{
		temp = temp->next;
		position++;
	}
	 /* If temp is NULL, index is out of range */
	if (temp == NULL)
	{
		return (NULL);
	}

	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* Insert the new node */
	temp2 = temp->next;
	temp->next = new;
	temp2->prev = new;
	new->prev = temp;
	new->n = n;
	new->next = temp2;

	return (new);
}
