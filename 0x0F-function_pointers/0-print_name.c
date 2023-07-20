#include "function_pointers.h"
#include<stdio.h>
/**
 * print_name - A function that prints a name
 * @f: another function
 * @name: name
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
