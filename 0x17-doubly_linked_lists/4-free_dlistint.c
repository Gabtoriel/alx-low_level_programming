#include "lists.h"

/**
 * free_dlistint - frees the nodes of a doubly linked list
 * @head: pointer to the head of a doubly linked list
 *
 * Returns: (void) nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		exit(1);

	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);

}
