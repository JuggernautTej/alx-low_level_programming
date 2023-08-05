#include<stdio.h>

/**
 * main - a function that prints its name followed by a new line
 * @argc: the argument count as an integer.
 * @argv: unused argument.
 * Return: 0.
 */
int main(int argc, char **argv __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
