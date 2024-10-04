#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the  beginning
 * @head: a pointer to a first node of the list
 * @n: a value of the node to be added
 *
 * Return: a pointer to the new lists
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
