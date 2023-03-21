#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 * Return: (int) length of the string
 */
int _strlen(char *s)
{
	int i;
	int count;

	i = 0;
	count = 0;

	while ((*(s + i)) != '\0')
	{
		count = count + 1;
		i++;
	}
	return (count);
}
