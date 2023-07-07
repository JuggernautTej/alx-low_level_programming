#include"main.h"
#include<math.h>
/**
 *entry_sqrt - A function that helps get the square root of a number
 *
 *@i: pointer to an integer.
 *@j: pointer to an integer.
 *Return: integer .
 */
int entry_sqrt(int i, int j)
{
if (i * i == j)
{
return (i);
}
else if (i * i > j)
{
return (-1);
}
else
{
return (entry_sqrt(i + 1, j));
}
}
/**
 *_sqrt_recursion - A function that returns the natural square root of a
 *number.
 *@n: pointer to an integer.
 *Return: integer.
 */
int _sqrt_recursion(int n)
{
return (entry_sqrt(0, n));
}

