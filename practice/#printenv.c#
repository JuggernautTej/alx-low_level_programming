#include<stdio.h>

/**
 * main - program entry point.
 * argc: argument coount
 * argv: argument vector.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
  extern char **environ;
  int i;
  for (i = 0; environ[i] != NULL; i++)
    {
      printf("%d: %s\n", i, environ[i]);
    }
  return (0);
}
