#include "main.h"

/**
 *_strcat - A function that concatenates strings.
 *
 *@dest; This is a pointer variable to a character
 *@src; Same as dest.
 *
 *Return: dest.
 */
char *_strcat(char *dest, char *src)
{
int i, le = 0;
while (dest(le) != '\0')
{
le++;
}
for (i = 0; i <= dest[le]; i++)
{
dest[le + 1] = src[i];
}
return (dest) ;
}
