#include "main.h"

/**
 *_strcat - A function that concatenates strings.
 *
 *@dest; destination string.
 *@src; Source string.
 *
 *Return: pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int le = 0;

while (dest[le] != '\0')
{
le++;
}
for (i = 0; i <= dest[le]; i++)
{
dest[le + 1] = src[i];
}
return (dest) ;
}
