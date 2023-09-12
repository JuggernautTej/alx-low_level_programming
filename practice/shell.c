#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<string.h>

/**
 * main - basic simple shell.
 * Return: 1 or 0.
 */
int main(void)
{
  size_t buffsize = 0;
  char *buff = NULL;
  char *token;
  int status, i = 0;
  char **array;
  pid_t child_pid;
  while (1)
    {
      write(1, "#cisfun$ ",9);
      if (getline(&buff, &buffsize, stdin) == -1)
	{
	  perror("Error reading input");
	  exit(1);
	}
      token = strtok(buff, "\t\n");
      array = (char **)malloc(sizeof(char *) * 1024);
      if (array == NULL)
	{
	  perror("Error allocating memory");
	  exit(1);
	}
      while (token)
	{
	  array[i] = token;
	  i++;
	  token = strtok(NULL, "\t\n");
	}
      array[i] = NULL;
      child_pid = fork();
      if (child_pid == -1)
	{
	  perror("Error, could not fork");
	  exit(1);
	}
      if (child_pid == 0)
	{
	  if (execve(array[0], array, NULL) == -1)
	    {
	      perror("Error, could not create process");
	      exit(1);
	    }
	}
      else
	{
	  wait(&status);
	}
      i = 0;
      free(array);
    }
  return (0);
}
