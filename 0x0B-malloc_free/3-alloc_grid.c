#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2-D array of integers.
 * @width: width of array.
 * @height: height of array.
 * Return: pointer or NULL.
 */
int **alloc_grid(int width, int height)
{
int **p, x, y;
if (width <= 0 || height <= 0)
{
return (NULL);
}
p = (int **)malloc(sizeof(int *) * height);
if (p == NULL)
{
free(p);
return (NULL);
}
for (x = 0; x < height; x++)
{
p[x] = (int *)malloc(sizeof(int) * width);
if (p[x] == NULL)
{
for (y = 0; y < x; y++)
{
free(p[y]);
}
free(p);
return (NULL);
}
for (y = 0; y < width; y++)
{
p[x][y] = 0;
}
}
return (p);
}
