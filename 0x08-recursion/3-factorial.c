#include "main.h"

/**
 * factorial - a function that returns the factoial of a given number.
 * @n: the number.
 * Return: an integr.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
