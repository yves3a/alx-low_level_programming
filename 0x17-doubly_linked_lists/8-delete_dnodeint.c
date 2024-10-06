#include "lists.h"
#include <stddef.h>

/**
 * delete_dnodeint_at_index - a function that delets a node at index
 * @head: a pointer to a pointer to the first node
 * @index: a certain position where to delete a node.
 *
 * Return:1 if it suceeded, otherwise -1 .
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2;
	unsigned int position = 0;

	if ((*head) == NULL)
	{
		return (-1);
	}

	/* case where index is zero */
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)/* if the list is not made of only node */
			(*head)->prev = NULL;
		free(temp);
		temp = NULL;
		return (1);
	}

	/* iterating the list to find a node at index - 1 */
	while (temp != NULL && position < index - 1)
	{
		temp = temp->next;
		position++;
	}

	/* If temp is NULL or temp->next is NULL, index is out of range */
	if (temp == NULL || temp->next == NULL)
		return (-1);

	/* Case when deleting the last node */
	if (temp->next->next == NULL)
	{
		temp2 = temp->next;
		temp->next = NULL;
		free(temp2);
		temp2 = NULL;
	}
	else /* Case when deleting a middle node */
	{
		temp2 = temp->next;
		temp->next = temp2->next;
		temp2->next->prev = temp;
		free(temp2);
		temp2 = NULL;
	}
	return (1);
}
