#include"main.h"
#include<stddef.h>
/**
 *_strstr - A function that locates a substring.
 *
 *@haystack: pointer to string.
 *@needle: pointer to substring.
 *Return: pointer to the beginning of the located substring, or NULL
 *if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *a = haystack;
char *b = needle;
while (*a == *b && *b != '\0')
{
a++;
b++;
}
if (*b == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
