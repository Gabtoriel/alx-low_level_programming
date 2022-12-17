#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i = 0;
	int v = 9;

	while (i < v)
	{
		int j = i + 1;

		while (j <= v)
		{
			if (j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (((v - i != 1)))
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
