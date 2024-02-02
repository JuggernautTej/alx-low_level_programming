#include "hash_tables.h"

/**
* hash_djb2 - implementation of the djb2 algoritn
* @str: string used to generate hash value
* Return: hash value
*/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;
hash = 52381;
while ((c = *str++))
{
hash = ((hash << 5) + hash) +c;
}
return (hash);
}
