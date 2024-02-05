#include "hash_tables.h"

/**
 * key_index - a function that returns the index of a key
 * @key: the key as the object of the function
 * @size: the size of the hash table array
 * Return: the index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index = hash_djb2(key) % size;
return (index);
}
