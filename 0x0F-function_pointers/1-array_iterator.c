#include "function_pointers.h"
#include<stdio.h>
#include<stddef.h>
/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array.
 * @array: array
 * @size: array size
 * @action: pointer to function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t x;
for (x = 0; x < size; x++)
{
action(array[x]);
}
}
