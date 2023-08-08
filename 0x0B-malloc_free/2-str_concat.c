#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * _str_len - function that returns the lenght of a string.
 * @strg: string.
 * Return: integer.
 */
int _str_len(char *strg)
{
if (*strg == '\0')
return (0);
else
return (1 + _str_len(strg + 1));
}
/**
 * str_concat - a function that concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: a pointer to the duplicated string or NULL.
 */
char *str_concat(char *s1, char *s2)
{
int x, y, len1, len2;
char *p;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = _str_len(s1);
len2 = _str_len(s2);
p = malloc(sizeof(char) * (len1 + len2 + 1));
if (p == NULL)
{
return (NULL);
}
else
{
for (x = 0; x < len1; x++)
{
p[x] = s1[x];
}
for (y = 0; y < len2; y++)
{
p[x + y] = s2[y];
}
p[x + y] = '\0';
return (p);
}
}
