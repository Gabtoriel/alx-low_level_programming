#include "main.h"

/**
 * _strspn - function to return the length of a prefix substring
 * @s: holds a pointer to the string to be searched
 * @accept: substring to search the  occurence of each character in s
 * Return: (unsigned int) length of the occurence of each charcter
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, count = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		unsigned int j;

		for (j = 0; s[j] != ' '; j++)
		{
			if (s[j] == accept[i])
			{
				count++;
			}
			else
			{
				continue;
			}
		}
	}
	return (count);
}
