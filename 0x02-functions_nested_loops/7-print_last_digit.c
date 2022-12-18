#include "main.h"

/**
 * print_last_digit - program to print the last digit of a number
 * @n: this parameter holds the value to return its last number
 *
 * Return: the last digit of the given value
 */
int print_last_digit(int n)
{
	int last_digit;
	if (n > 0)
	{
		last_digit = n % 10;
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = (-n) % 10;
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
