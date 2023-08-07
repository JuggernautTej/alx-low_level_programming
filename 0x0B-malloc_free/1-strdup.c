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
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of a string given as a parameter.
 * @str: this is the string.
 * Return: a pointer to the duplicated string or NULL.
 */
char *_strdup(char *str)
{
int x;
char *p;
int len =  _str_len(str);
p = malloc(sizeof(char) * (len + 1));
if (p == NULL)
{
return (NULL);
}
else
{
for (x = 0; x < len; x++)
{
p[x] = str[x];
}
p[len] = '\0';
return (p);
}
}
