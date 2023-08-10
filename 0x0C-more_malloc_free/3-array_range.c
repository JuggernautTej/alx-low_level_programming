#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 * Return: pointer to newly created array or NULL if unssuccesful.
 */
int *array_range(int min, int max)
{
int x;
int *p;
if (min > max)
{
return (NULL);
}
p = malloc(sizeof(int) * (max - min));
if (p == NULL)
{
return (NULL);
}
else
{
for (x = 0; x <= (max - min); x++)
{
p[x] = min++;
}
}
return (p);
}
