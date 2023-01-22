#include "function_pointers.h"

/**
 * print_name - A function that prints a string
 * @name: pointer to a the constant string to be printed
 * @f: pointer to the function used to print the passed string
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
