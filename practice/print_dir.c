#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

/**
 * main - program entry point to print directories in environment variable
 * PATH.
 * Return: Always 0.
 */
int main(void)
{
  extern char **environ;
  char *tkn;
  char *path;
  char *dir;
  int x, y;
  for (x = 0; environ [x] != NULL; x++)
    {
      tkn = strtok(environ[x], "=");
      if (tkn != NULL && strcmp(tkn, "PATH") == 0)
	{
	  tkn = strtok(NULL, "=");
	  if (tkn != NULL)
	    {
	      path = strdup(tkn);
	      dir = strtok(path, ":");
	      y = 0;
	      while (dir)
		{
		  printf("%s\n", dir);
		  dir = strtok(NULL, ":");
		  y++;
		}
	      free(path);
	    }
	}
    }
  return (0);
}
