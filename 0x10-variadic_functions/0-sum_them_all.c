#include<stdarg.h>
#include<stdio.h>
/**
 * sum_them_all - a function that sums all its parameters
 * @n: first argument
 *
 * Return: sum as an integer
 */
int sum_them_all(const unsigned int n, ...)
{
  va_list tr;
  int sum = 0;
  unsigned int x;
  if (n == 0)
      return (0);
  va_start(tr, n);
  for (x = 0; x < n; x++)
    {
      int next = va_arg(tr, int);
      sum += next;
    }
  va_end(tr);
  return (sum);
}
