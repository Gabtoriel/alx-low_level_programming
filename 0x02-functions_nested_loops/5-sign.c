#include "main.h"

/**
 * print_sign - print the negative or positive sign of a value
 * @n: (type int) holds the integer
 *
 * return: 1 (positive) 0 (negative) -1 (zero)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
