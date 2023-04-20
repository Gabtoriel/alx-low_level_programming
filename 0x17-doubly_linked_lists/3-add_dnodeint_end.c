#include "list.h"

/**
 * add_dnodeint_end - adds a particular node to the end of a doubly linked list
 * @head: a double pointer to the head of the doubly linked list
 * @n: element to add
 *
 * Return: address of the new element or Null if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	h = *head;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
		new->prev = h;
		return (new);
	}

	h = new;
	new->prev = NULL;
	return (new);
}
