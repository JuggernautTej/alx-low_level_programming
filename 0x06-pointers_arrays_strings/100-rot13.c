#include"main.h"
/**
 *rot13- A function that encodes a string using rot13.
 *
 *@str: pointer to string.
 *Return: pointer to the encoded string.
 */
char *rot13(char *str)
{
  int i = 0;
  while (str[i] != '\0')
    {
      char offset = (str[i] >= 'a' && <= 'z') || (str[i] >= 'A' && str[i] <='Z'))
      {
	str[i] = ((str[i] - offset + 13) % 26) + offset;
      }
      i++;
    }
}
