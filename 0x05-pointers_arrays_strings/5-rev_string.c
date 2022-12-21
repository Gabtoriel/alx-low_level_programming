#include "main.h"

/**
 * rev_string - prints a given string in reverse
 * @s: pointer to a string
 */
void rev_string(char *s)
{
	int i, k, count;

	i = 0;
	count = 0;

	while ((*(s + i)) != '\0')
	{
		count++;
		i++;
	}

	for (k = 0; k < count/2; k++)
	{
		char ch = s[k];
		s[k] = s[count - 1 - k];
		s[count - 1 - k] = ch;
	}
}
