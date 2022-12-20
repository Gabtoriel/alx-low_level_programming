#include "main.h"

/**
 * rev_string - prints a given string in reverse
 * @s: pointer to a string
 */
void rev_string(char *s)
{
	int i, j, k, count, r_count;

	i = 0;
	count = 0;

	while ((*(s + i)) != '\0')
	{
		count++;
		i++;
	}

	char rev[count];

	for (j = 0; j < count; j++)
	{
		rev[j] = *(s + j);
	}

	r_count = count;
	--count;
	for (k = 0; k < r_count; k++)
	{
		*(s + k) = rev[count];
		--count;
	}
}
