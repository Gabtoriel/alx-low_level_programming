#include "search_algos.h"

/**
 * linear_search - searches for an element in a datastructure in a linear form.
 * @array: pointer to the beginning of an array of items.
 * @size: number of elements in the array.
 * @value: the value to be searche for.
 *
 * Return: index of found element (successful) else -1 (unsuccessful).
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (int)-1;
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (int)i;
	}

	return (int)-1;
}
