#include<stdio.h>
/**
 *main - entry point
 */
int main(void)
{
char c;
int i;
float z;

printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long long int: %llu byte(s)\n", (unsigned long long)sizeof(i));
printf("Size of a float: %lu byte(s)\n", sizeof(z));
       
return (0);
}
