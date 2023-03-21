#include "main.h"

/**
 * _memcpy - This function copies bytes from one memory to another.
 * @dest: pointer to the block of memory that src will be copied to
 * @src: pointer to the block of memory to be copied to dest
 * @n: The amount of memory to be copied
 * Return: *(dest) pointer to the block of memory src was copied to
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
