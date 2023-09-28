#include<stdio.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary of a number.
 * @n: the number.
 * Return: void.
 */
void print_binary(unsigned long int n)
{
if (n == 0 || n == 1)
{
_putchar(n + '0');
return;
}
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
