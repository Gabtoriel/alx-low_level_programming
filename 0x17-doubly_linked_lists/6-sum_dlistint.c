#include "lists.h"

/**
 * sum_dlistint - sums the integers in the doubly linked list
 * @head: first node in the linked list
 *
 * Return: returns the total sums of all the integers in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h;
	int total_sum;

	h = head;
	total_sum = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		total_sum += h->n;
		h = h->next;
	}

	return (total_sum);
}
