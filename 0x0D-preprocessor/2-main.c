#include<stdio.h>
/**
 *main - A function that prints its name.
 *
 *Return: 0.
 */
int main(void)
{
const char *p = __FILE__;
const char *filename = p;
while (*p != '\0')
{
if (*p == '/')
{
filename = p + 1;
}
p++;
}
printf("%s\n", filename);
return (0);
}