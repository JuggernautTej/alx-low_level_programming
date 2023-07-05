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
return ;
}
else
{
return (_puts_recursion(s[i]) + _puts_recursion(s[i + 1]));
i++;
}
_putchar(*s);
_putchar('\n');
}
