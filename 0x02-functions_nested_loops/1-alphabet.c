#include "main.h"

/**
 * print_alphabet - print alphabets from a-z
 *
 * return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
