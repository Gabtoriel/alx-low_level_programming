#include "lists.h"

/**
 * get_dnodeint_at_index - returns a node at a given index
 * @head: pointer to a the head of the doubly linked list
 * @index: index of the element to return
 *
 * Return: (dlistint_t)node found based on the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h;
	unsigned int count;

	h = head;
	count = 0;

	if (h == NULL)
		return (NULL);

	while (h != NULL && count <= index)
	{
		if (count == index)
			return (h);
		count++;
		h = h->next;
	}
	return (NULL);
}
