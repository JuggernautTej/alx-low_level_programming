#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a mew line.
 * @separator: the string to be printed between numbers.
 * @n: number of integers passed to the function.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x;
char *strg;
va_list tally;
va_start(tally, n);
for (x = 0; x < n; x++)
{
strg = va_arg(tally, char *);
if (strg == NULL)
{
printf("(nil)");
}
else
{
printf("%s", strg);
}
if (separator != NULL && x < n - 1)
{
printf("%s", separator);
}
}
va_end(tally);
putchar('\n');
}
