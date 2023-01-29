/**
<<<<<<< HEAD
 * print_name - A function that prints a string
 * @name: pointer to the constant string to be printed
 * @f: pointer to the function used to print the passed string
 * Return: void
 */
=======
 * print_name - function to print name
 *
 * @name: name to print
 * @f: function pointer that doesn't return anything
 *
 * Return: Always 0 (Success)
*/

>>>>>>> b5e718357c214dd1ab100cab2fbb35238ffec730
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
