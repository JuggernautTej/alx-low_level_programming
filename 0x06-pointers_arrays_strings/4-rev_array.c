#include"main.h"
/**
 *reverse_array - A function that reverses the content of an array.
 *
 *@a: pointer to an array.
 *@n: integer representing the number of contents in array.
 *
 *Return: reversed array.
 */
void reverse_array(int *a, int n)
{
int i;
int temp;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
for (i = 0; i < n; i++)
{
return;
}
}
