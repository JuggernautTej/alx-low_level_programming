#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *create_array - A function that creates an array of chars and
 *initializes it with a specific char.
 *
 *@size: integer representing the size of char.
 *@c: character.
 *Return: char.
 */
char *create_array(unsigned int size, char c)
{
char *b;
unsigned int x;
if (size == 0)
return (NULL);
b =  malloc(sizeof(char) * (size + 1));
if (b == NULL)
{
return (NULL);
}
else if (b != NULL)
{
for (x = 0; x < size; x++)
{
b[x] = c;
}
}
return (b);
}
