#include <stdio.h>

/**
 * main -  program to print the name of the file an executable was compiled from
 * Return: (0) sucess
 */
 int main(void)
 {
     printf("%s", __FILE__);
     return (0);
 }
