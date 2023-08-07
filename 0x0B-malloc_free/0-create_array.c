#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of chars, and initializes it
 * with a specific char.
 * @size: size of the array.
 * @c: the specific char to be initialized.
 * Return: a pointer to the array or NULL.
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int x;
if (size == 0)
{
return (NULL);
}
p = (char *)malloc(sizeof(char) * size);
if (p == NULL)
{
return (NULL);
}
else
{
for (x = 0; x < size; x++)
{
p[x] = c;
}
}
return (p);
}
