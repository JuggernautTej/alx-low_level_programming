#include "main.h"

/**
 * _stlen - a function to that checks the length of a string.
 * @s: the string
 * Return: integer.
 */
int _strlen(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen(s + 1));
}
