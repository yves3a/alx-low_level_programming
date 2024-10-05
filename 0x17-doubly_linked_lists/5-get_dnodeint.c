#include "lists.h"

/**
 * get_dnodeint_at_index -a function that returns a node at an index
 * @head: a pointer to the first node
 * @index: position of the node to be returned
 *
 * Return: a pointer to a node located at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int position = 0;

	while (temp != NULL && position < index)
	{
		temp = temp->next;
		position++;
	}

	/* if the node does not exist */
	if (temp == NULL)
		return (NULL);

	return (temp);
}
