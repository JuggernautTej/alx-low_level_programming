#include<stdio.h>
#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: the string containing the binary number.
 * Return: converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int uint = 0;
if (*b == '1' || *b == '0')
{
while (*b != '\0')
{
uint <<= 1;
uint |= (*b == '1') ? 1 : 0;
b++;
}
return (uint);
}
else
return (0);
}