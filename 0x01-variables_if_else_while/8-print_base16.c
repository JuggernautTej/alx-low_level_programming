#include<stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int a;

char b;
  
for (int a = 0; a <= 9; a++)
{
putchar(a + '0');
}
  
for (char b = 'a'; b <= 'f'; b++)
{
putchar (b);
}
putchar ('\n');
return (0);
}
