#include<stdio.h>
#include "main.h"

/**
 * clear_bit - a funcion that sets the value of a bit to 0.
 * @n: pointer to an integer.
 * @index: the index.
 * Return: the value of the index or -1 .
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
