#include"main.h"
/**
 *string_toupper - A function that changes lower case letters in a
 *string to upper case.
 *
 *@des: pointer to string.
 *Return: pointer to the resulting string @dest.
 */
char *string_toupper(char *des)
{
int i;
for (i = 0; des[i] != '\0'; i++)
{
if (des[i] >= 'a' && des[i] <= 'z')
{
des[i] -= 32;
}
}
return (des);
}
