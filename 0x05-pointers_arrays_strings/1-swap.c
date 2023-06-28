#include "main.h"

/**
 *swap_int - function to point to an int, n, and updates value to 98
 *
 *@a: A parameter pointing to an integer.
 *@b: A parameter pointing to another integer.
 *
 *Return: nothing.
 */
void swap_int(int *a, int *b)
{
int brk = *a;
*a = *b;
*b = brk;
}
