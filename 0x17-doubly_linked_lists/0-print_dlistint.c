#include "lists.h"

/**
 * print_dlistint - program to print the elements of a doubly linked list
 * @h: pointer to a dlist struct
 *
 * Return: no of elements (size_t)
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		if (count == 0 && h->prev != NULL)
			exit(1);

		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
