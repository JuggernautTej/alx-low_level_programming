#include<stdarg.h>
#include<stdio.h>
/**
 * print_strings - a function that prints strings followed by new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers to be passed to the function
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list tr;
unsigned int x;
va_start(tr, n);
for (x = 0; x < n; x++)
{
char *next = va_arg(tr, char *);
if (next == NULL)
printf("(nil)");
if (next != NULL)
printf("%s", next);
if (separator != NULL && x != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(tr);
}
