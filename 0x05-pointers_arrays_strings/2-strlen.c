#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 * Returns: length of the string
 */
int _strlen(char *s)
{
	int i,j;
	int count;

	i = 0;
	j = 1;

	while (i < j)
	{
		if (*(s + i) != '\0')
		{
			count++;
		}
		else
		{
			return (count);
		}
		j++;
		i++;
	}
}
