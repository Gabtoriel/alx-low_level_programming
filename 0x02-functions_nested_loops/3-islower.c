#include "main.h"

/**
 * _islower - checks if a character is in lower case
 * @c: (type int) holds a character
 *
 * Return: 1 (success) 0 (failed)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
