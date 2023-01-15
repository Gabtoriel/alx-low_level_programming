#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate a bunch of memory using malloc and return a pointer
 * @b: Size of memory to be allocated
 * Return: a pointer to the memory or exit(98) if allocation fails
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = (unsigned int *)malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
