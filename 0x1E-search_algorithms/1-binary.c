#include "search_algos.h"

int bs_divide_conquer(int *array, size_t low, size_t high, int value);
void print_array(int *array, size_t begin, size_t size);
/**
 * binary_search - searches for an element in an array using binary search.
 * @array: contains the elements to be searched.
 * @size: number of elements in the array.
 * @value: number to be looked for.
 *
 * Return: index of found element (successful) else -1 (unsuccessful).
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, m;
	int res;

	if (array == NULL)
		return ((int)-1);

	printf("Searching in array:");
	print_array(array, 0, size);
	low = 0; /* lower bound of the array */
	high = size - 1; /* higher bound of the array */
	m = (low + high)/2;

	if (array[m] == value)
		return ((int)m);
	else if (array[m] > value)
	{
		res = bs_divide_conquer(array, low, m - 1, value);
		return ((int)res);
	}
	else if (array[m] < value)
	{
		res = bs_divide_conquer(array, m + 1, high, value);
		return ((int)res);
	}
	return ((int)-1);
}

/**
 * bs_divide_conquer - searches a datastructure by dividing it in half.
 * @array: bucket that contains the elements.
 * @low: lower bound of the array.
 * @high: higher bound of the array.
 * @value: value to be searched for.
 *
 * Return: index of the value (success) else -1 value not found.
 */
int bs_divide_conquer(int *array, size_t low, size_t high, int value)
{
	size_t m; /* contains the index of the middle element */
	int res; /* contains result of the returned search */

	if (array == NULL)
		return ((int)-1);

	printf("Searching in array:");
	print_array(array, low, high + 1);
	if (low == high && array[low] != value)
		return ((int)-1);

	m = (low + high)/2;

	if (array[m] == value)
		return ((int)m);
	else if (array[m] > value)
	{
		res = bs_divide_conquer(array, low, m - 1, value);
		return ((int)res);
	}
	else if (array[m] < value)
	{
		res = bs_divide_conquer(array, m + 1, high, value);
		return ((int)res);
	}
	return ((int)-1);
}

/**
 * print_array - prints the elements in an array.
 * @array: bucket of elements.
 * @size: length of bucket.
 *
 * Returns: void.
 */
void print_array(int *array, size_t begin, size_t size)
{
	size_t i;

	for (i = begin; i < size; i++)
	{
		if (i == (size - 1))
			printf("%d", array[i]);
		else
			printf("%d, ", array[i]);
	}
	printf("\n");
}
