#include"main.h"
#include<stdio.h>
/**
 *main - Entry point to function.
 *
 *@argc: argument count.
 *@argv: pointer to an array.
 *Return: Always 0 (Success) .
 */
int main(int argc, char *argv[])
{
int x;
for (x = 0; x <= argc; x++)
{
if (argv[x] != argv[argc])
{
printf("%d\n", argc - 1);
break;
}
}
return (0);
}
