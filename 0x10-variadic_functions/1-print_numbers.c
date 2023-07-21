#include<stdarg.h>
#include<stdio.h>
/**
 * print_numbers - a function that pronts numbers followed by new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers to be passed to the function
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list tr;
unsigned int x;
va_start(tr, n);
for (x = 0; x < n; x++)
{
int next = va_arg(tr, int);
printf("%d", next);
if (separator != NULL && x != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(tr);
}
