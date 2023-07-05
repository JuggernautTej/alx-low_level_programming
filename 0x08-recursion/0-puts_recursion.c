#include"main.h"
/**
 *_puts_recursion - A function that prints the a string.
 *
 *@s: pointer to a string.
 *Return: void.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (_puts_recursion(*s + 1]));
}
_putchar(*s);
}
