#include"main.h"
/**
 *pow_recursion - A function that returns the value of x raised
 *to the power of y.
 *
 *@x: pointer to an integer.
 *@y: pointer to an integer - the exponential.
 *Return: integer .
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return  (x * _pow_recursion(x, y - 1));
}
}
