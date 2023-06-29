#include "main.h"

/**
 *_puts2 - function to print every other character of a string
 *
 *@str: A parameter pointing to a character.
 *
 *Return: nothing.
 */
void _puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
