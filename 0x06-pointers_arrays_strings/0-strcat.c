#include "main.h"

int _strlen(char *s);

/**
 * _strcat - This concatenates two stings
 * @dest: this is the string to be added
 * @src: This is the string to be added
 * Return: a pointer to the dest parameter
 */
char *_strcat(char *dest, char *src)
{
	int _ld = _strlen(dest);
	int _ls = _strlen(src);

	for (int i = 0; i <= _ls; i++)
	{
		dest[_ld + i] = src[i];
	}
	return (dest);
}

/**
 * _strlen - function to get the length of a string and return a pointer
 * @c: char pointer
 * Return: int (number of characters in the string
 */
int _strlen(char *s)
{
	int count = 0;

	for (int i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
