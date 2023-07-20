#include "function_pointers.h"
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
/**
 * int_index - a function that searches for an integer.
 * @array: array
 * @size: array size
 * @cmp: pointer to function
 * Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (size <= 0)
return (-1);
if (array && cmp != NULL)
{
for (x = 0; x < size; x++)
{
if (cmp(array[x]) != 0)
return (x);
}
}
return (-1);
}
