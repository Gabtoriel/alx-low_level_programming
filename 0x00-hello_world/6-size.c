#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program to print the * sizes of memory contained by types
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int k;
	long long int v;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)(sizeof(c)));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)(sizeof(i)));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)(sizeof(k)));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)(sizeof(v)));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)(sizeof(f)));
	return (0);
}
