#include "lists.h"

/**
 * add_dnodeint - program to add a new dnode to the start of the list
 * @head: pointer to pointer to the head of the list node
 * @n: integer element to add
 *
 * Return: pointer to the added node else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	h = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = h;

	if (h != NULL)
		h->prev = new;

	new->prev = NULL;
	h = new;
	return (h);
}
