#include<stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char beta;

for (beta = 'a'; beta <= 'z' ; beta++)
{
if (beta == 'q' || beta == 'e')
continue;
putchar(beta);
}
putchar('\n');
return (0);
}
