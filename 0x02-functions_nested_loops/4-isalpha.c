#include "main.h"

/**
 * _isalpha - checks if a given letter or number is upper or lowercase
 * @c: (type int) to hold character value
 *
 * Return: 1 (success) 0 (failed)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
