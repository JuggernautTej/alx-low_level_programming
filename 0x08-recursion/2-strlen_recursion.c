#include"main.h"
/**
 *_strlen_recursion - A function that prints the length of a string.
 *
 *@s: pointer to a string.
 *Return: integer of string @s .
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 +  _strlen_recursion(s + 1));
}
}
