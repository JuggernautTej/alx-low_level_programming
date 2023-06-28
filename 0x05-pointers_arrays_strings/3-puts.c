#include "main.h"

/**
 *_strlen - function to return lenght of a string
 *
 *@s: A parameter pointing to a character.
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
return (i);
}
