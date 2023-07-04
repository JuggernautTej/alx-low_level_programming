#include"main.h"
#include<stdio.h>
/**
 *print_diagsums - A function that prints the sum of the diagonals of
 *a square matrix of integers.
 *
 *@a: pointer to an array.
 *@size: size of matrix.
 *Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
int main_diagsum = 0;
int off_diagsum = 0;
int x, y;
for (x = 0; x <= (size * size); x = x + size + 1)
{
main_diagsum = main_diagsum + a[x];
}
for (y = size - 1; y <= (size * size) - size; y = y + size - 1)
{
off_diagsum = off_diagsum + a[y];
}
printf(" %d, %d\n", main_diagsum, off_diagsum);
}
