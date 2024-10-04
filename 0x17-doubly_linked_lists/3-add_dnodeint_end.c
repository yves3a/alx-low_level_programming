#include "lists.h"

/**
 * add_dnodeint_end - function that adds new node at the end
 * @head: a pointer to the first node
 * @n: value of the new node
 *
 * Return: a pointer to the new list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->n = n;
	new->prev = NULL;

	/* List is empty, new node becomes the first node */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	temp = *head;

	/* Traverse to the last node */
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	/* Set the new node at the end */
	temp->next = new;
	new->prev = temp;

	return (new);
}
