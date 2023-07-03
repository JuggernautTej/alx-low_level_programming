#include"main.h"
/**
 *_memset - A function that fills memory with a constant byte.
 *
 *@s: pointer to string.
 *@b: character value to be inserted.
 *@n: the number of bytes to be replace.
 *Return:value of new character string.
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
s[i] = b
}
return (s);
}
