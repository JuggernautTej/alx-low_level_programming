#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * _getenv - custom getenv program.
 * name: the name of the enviroment variable.
 * Return: a pointer to the coresponding value string.
 */
char *_getenv(const char *name)
{
  extern char **environ;
  char *value = NULL;
  char **env;
  char *env_entry;
  char *env_name;
  for (env = environ; *env != NULL; env++)
    {
      env_entry = *env;
      env_name = env_entry;
      while (*env_entry != '=' && *env_entry != '\0')
	{
	  env_entry++;
	}
      if (*env_entry == '=')
	{
	  *env_entry = '\0';
	  env_entry++;
	}
      if (strcmp(env_name, name) == 0)
	{
	  value = env_entry;
	  break;
	}
    }
  return (value);
}

/**
 * main - entry point
 * Return: Always 0.
 */
int main(void)
{
  char *username = _getenv("HOME");
  if (username != NULL)
    {
      printf("HOME=%s\n", username);
    }
  else
    {
      printf("USER environment variable not found.\n");
    }
  return (0);
}
