#include "main.h"

unsigned int _strlen(const char *s);
unsigned int _pow(unsigned int n, unsigned int e);

/**
 * binary_to_uint - program to convert binary to decimal
 * @b: pointer to a string of characters
 * Return: (unsigned int) the decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count, i, k, n;

	count = _strlen(b);
	k = 2;
	n = 0;

	if (count == 0)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			count = count - 1;
			continue;
		}
		else
		{
			n = n + (1 * _pow(k, count));
			count = count - 1;
		}
	}
	return (n);
}

/**
 * _strlen - program to count a string
 * @s: pointer to the string of characters to be counted
 * Return: (unsigned int) this is the length of the string
 */
unsigned int _strlen(const char *s)
{
	unsigned int n;
	unsigned int count;

	count = 0;
	n = 0;

	if (s == NULL)
		return (0);
	while ((*(s + n)) != '\0')
	{
		if ((*(s + n)) == '1' || (*(s + n)) == '0')
		{
			count++;
			n++;
		}
		else
			return (0);
	}
	return (count);
}

/**
 * _pow - get the (n)power of a given number
 * @n: number to be raised to a certain power
 * @e: the number of times a number should be raised
 * Return: (unsigned int) the power
 */
unsigned int _pow(unsigned int n, unsigned int e)
{
	unsigned int p = 1, i;
	
	for (i = 1; i < e; i++)
	{
		if (e == 0)
		{
			p = 1;
			return (p);
		}
		else if (e == 1)
			return (n);
		p = p * n;
	}
	return (p);
}
