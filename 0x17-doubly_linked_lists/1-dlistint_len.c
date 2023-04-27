#include "lists.h"

/**
 * dlistint_len - count the number of nodes in a doubly linked list
 * @h: pointe to the head node
 *
 * Return: (size_t) no of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		if (count == 0 && h->prev == NULL)
			exit(1);
		count++;
		h = h->next;
	}
	return (count);
}
