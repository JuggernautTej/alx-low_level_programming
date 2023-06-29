#include "main.h"

/**
 *puts2 - function to print every other character of a string
 *
 *@str: A parameter pointing to a character.
 *
 *Return: nothing.
 */
void puts2(char *str)
{
if (*str == '\0')
{
return;
}

for (int i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
