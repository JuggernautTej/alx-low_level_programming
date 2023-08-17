#include<stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: the array.
 * @size: number of elements in the array.
 * @cmp: function pointer.
 * Return: integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (array == NULL || cmp == NULL || size <= 0)
return (-1);
for (x = 0; x < size; x++)
{
if (cmp(array[x]))
return (x);
}
return (-1);
}
