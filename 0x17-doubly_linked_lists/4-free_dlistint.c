#include "lists.h"

/**
 * free_dlistint - a function that frees a lists.
 * @head: a pointer to the first node
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;/* strore the current node */
		head = head->next;/* move to the next node */
		free(temp);/* free the current one*/
	}
}
