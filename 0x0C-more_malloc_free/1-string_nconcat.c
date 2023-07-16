#include"main.h"
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
unsigned int x = 0, y = 0, len1 = 0, len2 = 0;
char *p;
while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;
if (n < len2)
p = malloc(sizeof(char) * (len1 + n + 1));
else
p = malloc(sizeof(char) * (len1 + len2 + 1));
if (!p)
return (NULL);
while (x < len1)
{
p[x] = s1[x];
x++;
}
while (n < len2 && x < (len1 + n))
{
p[x++] = s2[y++];
}
while (n >= len2 && x < (len1 + len2))
{
p[x++] = s2[y++];
}
p[x] = '\0';
return (p);
}
