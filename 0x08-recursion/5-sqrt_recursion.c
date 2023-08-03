#include "main.h"

/**
 * test_sqrt - a function that returns the squareroot of a number.
 * @i: the number itself as an integer.
 * @j: the testing number.
 * Return: the natural squareroot as an integer.
 */
int test_sqrt(int i, int j)
{
if (j * j == i)
{
return (j);
}
if (j * j > i)
{
return (-1);
}
return (test_sqrt(i, j + 1));
}
/**
 * _sqrt_recursion - a function that returns the natural square root of
 * a number.
 * @n: integer.
 * Return: integer.
 */
int _sqrt_recursion(int n)
{
return (test_sqrt(n, 0));
}
