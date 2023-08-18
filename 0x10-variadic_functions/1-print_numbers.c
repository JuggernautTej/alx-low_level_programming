#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a mew line.
 * @separator: the string to be printed between numbers.
 * @n: number of integers passed to the function.
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x;
int num;
va_list list;
va_start(list, n);
for (x = 0; x < n; x++)
{
num = va_arg(list, int);
printf("%d", num);
if (separator != NULL && x < n - 1)
{
printf("%s", separator);
}
}
va_end(list);
putchar('\n');
}
