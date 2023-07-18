#include"main.h"
#include<string.h>
#include<stdlib.h>
/**
 *malloc_checked - A function that allocates memory using malloc.
 *
 *@b: integer.
 *Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
char *p = malloc(b);
if (p == NULL)
{
exit(98);
}
return ((void *)p);
}