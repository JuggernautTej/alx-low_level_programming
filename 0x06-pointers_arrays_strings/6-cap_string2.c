#include"main.h"
/**
 *cap_string- A function that capitalizes all words of a string.
 *
 *@str: pointer to string.
 *Return: pointer to the resulting string @str with all caps.
 */
char *cap_string(char *str)
{
int i = 0;
int j = 0;
char sp[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
'{', '}'};
int flag = 1;
while (str[i] != '\0')
{
if (str[i] == sp[j])
{
flag = 1;
}
else
{
if (flag)
{
if (str[i] >= 'a' && str[j] <= 'z')
{
str[i] -= 32;
}
flag = 0;
}
}
i++;
}
return (str);
}
