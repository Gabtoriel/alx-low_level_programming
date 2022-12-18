#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			int result = i * j;

			if (result > 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
