#include"main.h"
/**
 *_strspn - A function that gets tje lenght of a prefix substrings.
 *
 *@s: pointer to string.
 *@accept: pointer to control string.
 *Return:value of new character string.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;
unsigned int there = 0;
char *temp = accept;
while (*s && *accept)
{
while (*temp)
{
if (*s == *temp)
{
there = 1;
break;
}
temp++;
}
if (!there)
{
break;
}
len++;
s++;
}
return (len);
}
