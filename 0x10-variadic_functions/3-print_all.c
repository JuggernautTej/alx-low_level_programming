#include<stdarg.h>
#include<stdio.h>
/**
 * print_all - a function that prints anything.
 * @format: a lst of argument types.
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
va_list tr; /* declaration of variables and va_arg datatype */
int x, c_stat;
char *strg;
va_start(tr, format); /* initalized var arguments */
x = 0;
while (format != NULL && format[x] != '\0')
{
switch (format[x])
{
case 'i':
printf("%d", va_arg(tr, int));
c_stat = 0; /* checks if condition has been met */
break;
case 'f':
printf("%f", va_arg(tr, double));
c_stat = 0;
break;
case 'c':
printf("%c", va_arg(tr, int));
c_stat = 0;
break;
case 's':
strg = va_arg(tr, char *);
if (strg == NULL)
strg = "(nil)";
printf("%s", strg);
break;
default:
c_stat = 1;
break;
}
if (format[x + 1] != '\0' && c_stat == 0) /* if not NULL */
printf(", ");
x++; /* increment iteration step */
}
printf("\n");
va_end(tr); /* end of traversal */
}
