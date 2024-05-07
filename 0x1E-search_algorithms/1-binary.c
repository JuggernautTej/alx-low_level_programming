#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if not found
*/

int binary_search(int *array, size_t size, int value)
{
size_t x, to_the_left, to_the_right;
if (array == NULL)
return (-1);
to_the_left = 0;
to_the_right = size - 1;
while (to_the_left <= to_the_right)
{
printf("Searching in array: ");
for (x = to_the_left; x < to_the_right; x++)
printf("%d, ", array[x]);
printf("%d\n", array[x]);
x = to_the_left + (to_the_right - to_the_left) / 2;
if (array[x] == value)
return (x);
if (array[x] < value)
to_the_left = x + 1;
else
to_the_right = x - 1;
}
return (-1);
}
