#include"main.h"
/**
 *_strncat - A function that concatenates strings using at
 *most n bytes from src.
 *@dest: destination string.
 *@src: Source string.
 *@n: the number of bytes that will be used from the source string.
 *Return: pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int dest_len = 0;
while (dest[i++])
{
dest_len++;
}
for (i = 0; src[i] && i < n; i++)
{
dest[dest_len++] = src[i];
}
return (dest);
}
