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
char *result;

while (dest[le] != '\0')
{
result += dest[le];
le++;
}
while (src[i] != '\0')
{
result += src[i];
le++;
i++;
}
dest = result;
dest[le] = '\0';
return (dest) ;
}
