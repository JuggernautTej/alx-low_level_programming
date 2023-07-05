#include"main.h"
/**
 *_puts_recursion - A function that prints the a string, followed by a line.
 *@s: pointer to a string.
 *Return: void.
 */
void _puts_recursion(char *s)
{
int i = 0;
if (s[i] == '\0')
{
return (0);
}
else
{
return (_puts_recursion(s[i]));
i++;
}
_putchar(s);
_putchar('\n');
}
