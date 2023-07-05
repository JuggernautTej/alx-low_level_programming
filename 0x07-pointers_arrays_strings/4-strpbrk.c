#include"main.h"
/**
 *_strpbrk - A function that gets the lenght of a prefix substrings.
 *
 *@s: pointer to string.
 *@accept: pointer to control string.
 *Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
int y;
while (*s)
{
for (y = 0; accept[y]; y++)
{
if (*s == accept[y])
{
return (s);
}
}
s++;
}
return ('\0');
}
