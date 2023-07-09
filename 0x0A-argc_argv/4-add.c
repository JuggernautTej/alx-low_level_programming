#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *main - Entry point to function.
 *
 *@argc: argument count.
 *@argv: pointer to an array.
 *Return: 0 or 1 .
 */
int main(int argc, char *argv[])
{
int x;
int sum = 0;
if (argc == 1)
{
printf("0\n");
}
if (**argv >= 0 && **argv <= 9)
{
for (x = 1; x < argc; x++)
{
sum += atoi(argv[x]);
}
printf("%d\n", sum);
return (0);
}
else
printf("Error\n");
return (1);
}
