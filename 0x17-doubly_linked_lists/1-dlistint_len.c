#include "lists.h"

/**
 * dlistint_len - count the number of nodes in a doubly linked list
 * @h: pointe to the head node
 *
 * Return: (size_t) no of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *head;
	size_t count;

	head = h;
	count = 0;

	while (head != NULL)
	{
		if (count == 0 && head->prev == NULL)
			exit(1);
		count++;
		head = head->next;
	}
	return (count);
}
