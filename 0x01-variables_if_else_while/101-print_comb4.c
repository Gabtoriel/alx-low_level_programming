#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i = 0;
	int v = 9;

	while (i < (v - 1))
	{
		int j = i + 1;

		while (j < v)
		{
			int k = j + 1;

			while (k <= v)
			{
				if (k > j)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if ((8 - i != 1))
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
