#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: a pointer to a tring containing 0 and 1.
 * Return: the converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int unit = 0;
while (*b != '\0')
{
if (*b != '0' && *b != '1')
return (0);
unit <<= 1;
unit |= (*b == '1') ? 1 : 0;
b++;
}
return (unit);
}
