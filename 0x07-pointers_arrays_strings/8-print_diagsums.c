#include"main.h"
#include<stdio.h>
/**
 *print_diagsums - A function that prints the sum of the diagonals of
 *a square matrix of integers.
 *@a: pointer to an array.
 *@size: size of matrix.
 *Return: void.
 */
void print_diagsums(int *a, int size)
{
int main_diagsum = 0;
int off_diagsum = 0;
int x;
for (x = 0; x < size; x++)
{
main_diagsum = main_diagsum + a[(size * x) + x];
}
for (x = size - 1; x >= 0; x--)
{
off_diagsum += a[x * size + (size - x - 1)];
}
printf("%d, %d\n", main_diagsum, off_diagsum);
}
