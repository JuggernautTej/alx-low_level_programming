#include"main.h"
#include<string.h>
#include<stdlib.h>
/**
 *string_nconcat - A function that concatenates two strings.
 *@s1: pointer to first string.
 *@s2: pointer to second string.
 *@n: number of characters in @s2 to concatenate into @s1.
 *Return: pointer t newly allocated memory space with concatenation.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int x, y;
char *p;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (n < strlen(s2))
{
p = malloc(sizeof(char) * (strlen(s1) + n + 1));
if (p == NULL)
return ("");
if (p != NULL)
for (x = 0; s1[x] != '\0'; x++)
{
p[x] = s1[x];
}
for (y = 0; y < n && s2[y] != '\0'; y++)
{
p[x] = s2[y];
x++;
}
p[x] = '\0';
}
else if (n >= strlen(s2))
{
p = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
if (p == NULL)
return ("");
if (p != NULL)
for (x = 0; s1[x] != '\0'; x++)
{
p[x] = s1[x];
}
for (y = 0; s2[y] != '\0'; y++)
{
p[x] = s2[y];
x++;
}
p[x] = '\0';
}
return (p);
}
