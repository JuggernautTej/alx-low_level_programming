#include"main.h"
/**
 *leet - A function that encodes a string into 1337.
 *
 *@code: pointer to string.
 *Return:encoded character.
 */
char *leet(char *code)
{
int i = 0;
char leetMap[256] = {0};
leetMap['A'] = '4';
leetMap['a'] = '4';
leetMap['E'] = '3';
leetMap['e'] = '3';
leetMap['O'] = '0';
leetMap['o'] = '0';
leetMap['T'] = '7';
leetMap['t'] = '7';
leetMap['L'] = '1';
leetMap['l'] = '1';
while (code[i] != '\0')
{
if (leetMap[(unsigned char)code[i]] != 0)
{
code[i] = leetMap[(unsigned char)code[i]];
}
i++;
}
return (code);
}
