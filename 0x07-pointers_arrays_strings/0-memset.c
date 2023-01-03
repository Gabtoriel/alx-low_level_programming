#include "main.h"

/**
 * _memset - program to set n bytes of an array to a particular byte
 * @s: array to set its byte
 * @b: byte const to set in array index
 * @n: no of array elements to set
 * Return: (*ptr) to the array
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
