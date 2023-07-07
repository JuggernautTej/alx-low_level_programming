#include "main.h"

/**
 *_strlen - function to return lenght of a string
 *
 *@s: A parameter pointing to a character.
 *
 *Return: nothing.
 */
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}
