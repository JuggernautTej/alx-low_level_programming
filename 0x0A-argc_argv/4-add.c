#include<stdio.h>
#include<stdlib.h>

/**
 * int_check - a function that checks is elements are integers
 * @strg: string for checking
 * Return: 0.
 */
int int_check(char *strg)
{
while (*strg)
{
if (*strg < '0' || *strg > '9')
{
return (0);
}
strg++;
}
return (1);
}
/**
 * main - a function that prints its name followed by a new line
 * @argc: the argument count as an integer.
 * @argv: an array of the arguments passed.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int x, add = 0;
if (argc > 1)
{
for (x = 1; x < argc; x++)
{
if (!int_check(argv[x]))
{
printf("Error\n");
return (1);
}
add += atoi(argv[x]);
}
printf("%d\n", add);
}
else
{
printf("0\n");
}
return (0);
}
