#include"main.h"
/**
 *_puts_recursion - A function that prints the a string, followed by a line.
 *@s: pointer to a string.
 *Return: void.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
return (_puts_recursion(*s));
*s++;
_putchar('\n');
}
}
