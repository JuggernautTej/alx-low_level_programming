#include<stdio.h>

/**
 * main - a function that prints its name followed by a new line
 * @a: the argument count as an integer.
 * @b: an array of the arguments passed.
 * Return: 0.
 */
int main(int a, char *b[])
{
int x;
if (a >= 1)
{
for (x = 0; x < a; x++)
{
printf("%s\n", b[0]);
}
}
return (0);
}
