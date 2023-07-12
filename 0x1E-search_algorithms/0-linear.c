#include "search_algos.h"

/**
 * linear_search - program to search an array for a certain value
 *
 * @array: pointer to the first element of the array
 * @size: size of the array to search for the element
 * @value: number to search for
 *
 * Return: (int) index of the element
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("%d", array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
