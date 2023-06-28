#include "main.h"

/**
 *_puts - function to return lenght of a string
 *
 *@str: A parameter pointing to a character.
 *
 *Return: nothing.
 */
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
  _putchar(str[i]);
i++;
}
}
