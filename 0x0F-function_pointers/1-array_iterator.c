#include<stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each array element.
 * @array: an array of type int.
 * @size: array size.
 * @action: function pointer
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int x;
if (array == NULL || size == 0 || action == NULL)
{
return;
}
else
{
for (x = 0; x < (int)size; x++)
{
action(array[x]);
}
}
}
