#include "main.h"

/**
 *_strcat - A function that concatenates strings.
 *
 *@dest; This is a pointer variable to a character
 *@src; Same as dest.
 *
 *Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
}
