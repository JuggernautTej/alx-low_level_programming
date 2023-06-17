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

printf("Size of a char: %d byte(s)\n",(int)  sizeof(c));
printf("Size of an int: %d byte(s)\n", (int) sizeof(i));
printf("Size of a long int: %ld byte(s)\n",(long int) sizeof(i));
printf("Size of a long long int: %lld byte(s)\n",(long long int) sizeof(i));
printf("Size of a float: %lu byte(s)\n", sizeof(z));
return (0);
}
