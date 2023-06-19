#include<stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char beta;

for (beta = 'z'; beta >= 'a' ; beta--)
{
putchar(beta);
}
putchar('\n');
return (0);
}
