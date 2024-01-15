#include "main.h"

/**
 * _stlen - a function to that checks the length of a string.
 * @s: the string
 * Return: integer.
 */
int _str_len(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _str_len(s + 1));
}
