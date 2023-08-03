#include "main.h"

/**
 * _str_len - function that returns the lenght of a string
 * @strg: string.
 * Return: integer.
 */
int _str_len(char *strg)
{
int len = 0;
while (*strg != '\0')
{
len++;
strg++;
}
return (len);
}
/**
 * test_pal - function that returns 1 or 0 for a palindrome.
 * @t: string.
 * @fst: first index
 * @lst: last index
 * Return: 1 or 0.
 */
int test_pal(char *t, int fst, int lst)
{
if (fst >= lst)
{
return (1);
}
if (t[fst] != t[lst])
{
return (0);
}
return (test_pal(t, fst + 1, lst - 1));
}
/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * @s: the string
 * Return: integer. 1 or 0.
 */
int is_palindrome(char *s)
{
int x = _str_len(s);
return (test_pal(s, 0, x - 1));
}
