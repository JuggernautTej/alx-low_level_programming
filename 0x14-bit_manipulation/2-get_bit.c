#include <stdio.h>
#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @index: the index.
 * @n: the integer.
 * Return: the value of the index or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bitm;
int result;
if (index > 31)
return (-1);
bitm = 1 << index;
result = n & bitm;
if (result == 0)
{
return (0);
}
else
{
return (1);
}
}
