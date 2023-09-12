#include<stdio.h>

/**
 * main - a function that prints each command line argument followed by a new line
 * @a: the argument count as an integer.
 * @b: an array of the arguments passed.
 * Return: 0.
 */
int main (int argc __attribute__((unused)), char **argv)
{
int count = 0;
 while (argv[++count])
 {
 printf("%s\n", argv[count]);
 }
 return (0);
}
