#include "lists.h"

/**
 * print_dlistint - program to print the elements of a doubly linked list
 * @h: pointer to a dlist struct
 *
 * Return: no of elements (size_t)
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *head;
	size_t count;

	head = h;
	count = 0;

	while (head != NULL)
	{
		if (count == 0 && head->prev != NULL)
			exit(1);

		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}
