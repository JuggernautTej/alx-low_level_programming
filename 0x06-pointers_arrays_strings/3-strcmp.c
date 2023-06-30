#include"main.h"
/**
 *_strcmp - A function that compares strings.
 *
 *@s1: destination string.
 *@s2: Source string.
 *
 *Return: integer indicating the result of the comparison.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int result1 = s1[i] - s2[i];
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] < s2[i])
{
return (result1);
}
else if (s1[i] > s2[i])
{
return (result1);
}
i++;
}
if (s1[i] == '\0' && s2[i] == '\0')
{
return (0);
}
else if (s1[i] == '\0')
{
return (result1);
}
else
{
return (result1);
}
}
