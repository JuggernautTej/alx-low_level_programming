#include"main.h"
/**
 *_strcmp - A function that compares strings.
 *
 *@s1: destination string.
 *@s2: Source string.
 *
 *Return: integer indicating the result of the comparison.
 */
int _strcmp(char *s1, char *s2)
{
int result1 = *s1 - *s2;
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
if (*s1 == *s2)
{
return (0);
}
else
{
return (result1);
}
}
