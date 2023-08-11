#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: the integer.
 * Return: a pointer.
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(sizeof(int) * b);
if (b == INT_MAX)
{
exit(98);
}
if (p == NULL)
{
exit(98);
}
else
{
return (p);
}
}
