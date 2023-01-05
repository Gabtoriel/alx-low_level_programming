#include "main.h"

/**
 * factorial - program to compute the nth factorial of a number
 * @n: number to compute its facrorial
 * Return: (int n) the factorial of the given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
		{
			return (1);
		}
		else
		{
			return (n * factorial(n - 1));
		}
	}
}
