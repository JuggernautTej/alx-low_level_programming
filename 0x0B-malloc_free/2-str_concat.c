#include"main.h"
#include<string.h>
#include<stdlib.h>
/**
 *str_concat - A function that returns a pointer to a new allocated
 *space that contains contenatenated string of @s1 and @s2.
 *
 *@s1: pointer to first string.
 *@s2: pointer to second string
 *Return: pointer t newly allocated memory space with concatenation.
 */
char *str_concat(char *s1, char *s2)
{
int x = 0;
int y = 0;
char *p;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
p = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
if (p == NULL)
return ("");
if (p != NULL)
{
while (s1[x] != '\0')
{
p[x] = s1[x];
x++;
}
while (s2[y] != '\0')
{
p[x] = s2[y];
x++;
y++;
}
p[x] = '\0';
}
return (p);
}