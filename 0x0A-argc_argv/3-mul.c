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
int mul;
if (argc == 1)
{
printf("Error\n");
return (1);
}
else if (argc == 3)
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
}
return (0);
}
