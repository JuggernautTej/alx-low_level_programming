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
size_t i = 0;
size_t j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest) ;
}
