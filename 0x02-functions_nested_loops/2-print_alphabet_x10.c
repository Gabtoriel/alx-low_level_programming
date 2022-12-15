#include "main.h"

/**
 * print_alphabet_x10 - print the 26 letters 10 times
 *
 * return: void
 */
void print_alphabet_x10(void)
{
	int counter = 1;

	while (counter <= 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		counter++;
	}
}
