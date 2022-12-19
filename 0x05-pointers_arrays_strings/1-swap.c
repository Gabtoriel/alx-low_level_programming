#include "main.h"

/**
 * swap_int - swaps values
 * @a: 1st pointer
 * @b: 2nd pointer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
