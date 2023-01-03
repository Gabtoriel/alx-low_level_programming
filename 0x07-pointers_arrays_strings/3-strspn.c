#include "main.h"

/**
 * _strspn - function to return the length of a prefix substring
 * @s: holds a pointer to the string to be searched
 * @accept: substring to search the  occurence of each character in s
 * Return: (unsigned int) length of the occurence of each charcter
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i = 0;

	for (i; accept[i] != '\0'; i++)
	{
		unsigned int j = 0;

		for (j; s[j] != ' '; j++)
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
