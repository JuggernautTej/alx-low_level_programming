#include<stdio.h>
#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0.
 * @index: the index.
 * @n: pointer to an integer.
 * Return: the value of the index or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bitm;
if (index > 31)
return (-1);
bitm = 1 << index;
*n &= ~bitm;
return (1);
}
