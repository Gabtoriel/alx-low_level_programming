#include "main.h"

/**
 * _strchr - program to find if a character is in a string
 * @s: pointer to string to be searched
 * @c: character to be searched in string
 * Return: a pointer to the location of the found byte else return NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else if (s[i] == '\0')
		{
			break;
		}
		else
		{
			continue;
		}
	}
	return ('\0');
}
