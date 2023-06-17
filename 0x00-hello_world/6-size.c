#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
float z;
long int k;
long long int b;

printf("Size of a char: %d byte(s)\n", (int) sizeof(c));
printf("Size of an int: %d byte(s)\n", (int) sizeof(i));
printf("Size of a long int: %lu byte(s)\n", sizeof(k));
printf("Size of a long long int: %llu byte(s)\n", (long long int)sizeof(b));
printf("Size of a float: %lu byte(s)\n", sizeof(z));
return (0);
}
