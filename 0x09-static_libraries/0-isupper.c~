#include"main.h"
/**
 *_strncpy - A function that concatenates strings using at
 *most n bytes from src.
 *@dest: destination string.
 *@src: Source string.
 *@n: the number of bytes that will be used from the source string.
 *Return: pointer to the resulting string @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
