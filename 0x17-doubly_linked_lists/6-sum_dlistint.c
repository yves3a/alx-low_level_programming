#include "lists.h"

/**
 * sum_dlistint - function that returns a sum of node values
 * @head: a pointer to the first node of the list
 *
 * Return: sum of the node values in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/* if a list is empty */
	if (head == NULL)
		return (0);

	while  (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
