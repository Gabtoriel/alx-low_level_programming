#include "main.h"

/**
 * print_alphabet_x10 - print the 26 letters 10 times
 *
 * return: void
 */
void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter < 10)
	{
		char c = 'a';

		while (c <= 'Z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		counter++;
	}
}
