#include "lists.h"

/**
 * print_list - print the contents of a linked list
 * @h: a pointer to the first node of the linked list
 *
 * Return: The number of the elements in the data sturcture
 */
size_t print_list(const list_t *h)
{
	size_t n;
	
	n = 0;

	while (h)
	{
		n++;
		
		if(h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		if(h->next == NULL)
		{
			break;
		}
		else
			h = h->next;
	}
	return (n);
}
