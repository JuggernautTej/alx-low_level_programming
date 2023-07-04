#include"main.h"
#include<stdio.h>
/**
 *print_diagsums - A function that prints the sum of the diagonals of
 *a square matrix of integers.
 *
 *@a: pointer to an array.
 *@size: size of matrix.
 *Return: void.
 */
void print_diagsums(int *a, int size)
{
unsigned int main_diagsum = 0;
unsigned int off_diagsum = 0;
int x;
for (x = 0; x < size; x++)
{
main_diagsum += a[(size * x) + x];
off_diagsum += a[(size * (x + 1)) - (x + 1)];
}
printf(" %u, %u\n", main_diagsum, off_diagsum);
}
