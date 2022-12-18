#include "main.h"

/**
 * print_last_digit - program to print the last digit of a number
 * @n: this parameter holds the value to return its last number
 *
 *Return: the last digit of the given number
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	return (last_digit);
}
