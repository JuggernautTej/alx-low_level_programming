#include "main.h"

/**
 *print_rev - function to print the reverse of a string
 *
 *@str: A parameter pointing to a character.
 *
 *Return: nothing.
 */
void print_rev(char *str)
{
if (*str == '\0')
{
_putchar('\n');
return;
}
print_rev(str + 1);
_putchar(*str);
}
