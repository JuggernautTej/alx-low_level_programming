#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *_strdup - A function that returns a pointer to a new string that is
 *a duplicate of the string @str.
 *
 *@str: pointer to an array.
 *Return: pointer to the newly allocated memory space.
 */
char *_strdup(char *str)
{
int x = 0;
char *str_mem;
int s_len = 0;
while (str[s_len] != '\0')
{
s_len++;
}
str_mem = (char *) malloc((s_len + 1) * sizeof(char));
if (str == NULL)
return (NULL);
if (str_mem == NULL)
return (NULL);
if (str_mem != NULL)
{
while (str[x] != '\0')
{
str_mem[x] = str[x];
x++;
}
str_mem[x] = '\0';
}
return (str_mem);
}