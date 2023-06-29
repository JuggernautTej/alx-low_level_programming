#include "main.h"

/**
 *rev_string - function to print the reverse of a string
 *
 *@s: A parameter pointing to a character.
 *
 *Return: nothing.
 */
void rev_string(char *s)
{
  int start = 0;
  int end = 0;

  while (s[end] != '\0')
    {
      end++;
    }
  end--;
  
  while (start < end)
    {
      char temp = s[start];
      s[start] = s[end];
      s[end] = temp;
      start++;
      end--;
    }
}
