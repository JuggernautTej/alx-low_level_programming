#include "main.h"

/**
 *rev_string - function to print the reverse of a string
 *
 *@s: A parameter pointing to a character.
 *
 *Return: nothing.
 */
void rev_string(char *s)
{
if (*s == '\0')
{
return;
}
rev_string(s + 1);
_putchar(*s);
}
