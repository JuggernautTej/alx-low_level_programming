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
int le = 0;

while (str[le] != '\0')
{
le++;
}

while (le > 0)
{
le--;
_putchar(str[le]);
}
_putchar('\n');
}
