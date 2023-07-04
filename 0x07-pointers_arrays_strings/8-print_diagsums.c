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
int x;
for (x = 0; x < size; x++)
{
main_diagsum += a[x * size + x];
off_diagsum += a[(x * size) + (size - 1 - x)];
}
printf(" %d, %d\n", main_diagsum, off_diagsum);
}
