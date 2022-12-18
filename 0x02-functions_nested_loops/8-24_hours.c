#include "main.h"

/**
 * jack_bauer - this function prints the whole time in jack bauer sound track
 * Return: void
 */
void jack_bauer(void)
{
	int i;

	for (i = 0; i <= 2; i++)
	{
		int j;

		for (j = 0; j <= 3; j++)
		{
			int k;

			for (k = 0; k <= 5; k++)
			{
				int l;

				for (l = 0; l <= 9; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
	_putchar('\n');
}
