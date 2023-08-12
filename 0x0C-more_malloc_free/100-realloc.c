#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free.
 * @ptr: the initial pointer.
 * @old_size: the size of the pointer.
 * @new_size: the size of the new memory block for reallocation.
 * Return: not sure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int x, y;
char *r;
if (new_size == old_size)
return (ptr);
r = malloc(new_size);
if (ptr == NULL)
{
return (r);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (r == NULL)
return (NULL);
for (x = 0; x < new_size; x++)
{
for (y = 0; y < old_size; y++)
{
r[x] = ((char *)ptr)[y];
}
}
free(ptr);
return (r);
}
