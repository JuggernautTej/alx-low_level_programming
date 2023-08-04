#include<stdio.h>

/**
 * main - a function that prints its name followed by a new line
 * @argc: the argument count as an integer.
 * @argv: an array of the arguments passed.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int x;
if (argc >= 1)
{
for (x = 0; x < argc; x++)
{
printf("%s\n", argv[0]);
}
}
return (0);
}
