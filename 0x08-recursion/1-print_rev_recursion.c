#include "main.h"

/**
 * _print_rev_recursion - given a string print it in reverse using recursion
 * @s: string to be printed in reverse
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
