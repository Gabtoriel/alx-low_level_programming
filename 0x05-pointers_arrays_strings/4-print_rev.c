#include "main.h"

/**
 * print_rev - prints a given string in reverse
 * @s: pointer to a string
 */
void print_rev(char *s)
{
	int i = 0;
	int count = 0;

	while ((*(s + i)) != '\0')
	{
		count++;
		i++;
	}
	if (count == 0)
	{
		_putchar('\n');
	}
	else if (count > 0)
	{
		while (count >= 0)
		{
			--count;
			_putchar((*(s + count)));
			--count;
		}
		_putchar('\n');
	}
}
