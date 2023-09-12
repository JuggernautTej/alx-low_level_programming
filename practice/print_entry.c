#include<stdio.h>
#include<stdlib.h>

/**
 * main - function that prints $, waits for user input and prints input in new
 * line.
 * Return: 1 or 0.
 */
int main (void)
{
  char *buffer;
  size_t bufsize = 32;
  buffer = (char *)malloc(bufsize * sizeof(char));
  if (buffer == NULL)
    return (1);
  printf("$ ");
getline(&buffer, &bufsize, stdin);
  printf("%s", buffer);
  return (0);
}