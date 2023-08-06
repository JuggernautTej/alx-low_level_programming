#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry.
 * @argc: the argument count as an integer.
 * @argv: an array of the arguments passed.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int x, mul;
if (argc == 3)
{
for (x = 1; x < argc - 1; x++)
{
mul = atoi(argv[x]) * atoi(argv[x + 1]);
}
printf("%d\n", mul);
}
else
{
printf("Error\n");
}
return (0);
}
