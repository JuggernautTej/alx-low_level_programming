#include<stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: the name as a string.
 * @f: the pointer to the funtion print_f.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL)
{
f(name);
}
else
return;
if ( f = NULL)
return;
}
