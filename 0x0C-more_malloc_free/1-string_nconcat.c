#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - returns a pointer to the address of a strings
 * @s1: The first string pointer
 * @s2: The second string pointer
 * @n: The length of second string to be copied
 * Return: A pointer to the address that s1 and s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, j, i;
	char *ptr;

	l1 = l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
		l2++;

	if (n > l2 || n == l2)
		n = l2;

	ptr = (char *)malloc(sizeof(char) * (l1 + n + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j <= n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i + 1] = '\0';
	return (ptr);
}
