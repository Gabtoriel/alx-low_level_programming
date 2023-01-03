#include "main.h"

/**
 * _strpbrk - program to locate the first occurence of a byte in a src string
 * @s: pointer to the src string to be searched
 * @accept: pointer to the bytes of sting to be found in the src string
 * Return: a pointer to the first found occurence of any of the bytes given
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; accept[i] != '\0'; i++)
	{
		unsigned int j;

		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				return (&s[j]);
			}
			else
			{
				continue;
			}
		}
	}
	return ('\0');
}
