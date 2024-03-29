#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: the table size.
 * Return: a pointer to the newly created table or NULL.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int x;
hash_table_t *table =  (hash_table_t *) malloc(sizeof(hash_table_t));
if (table == NULL)
return (NULL);
table->size = size;
table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));
if (table->array == NULL)
{
free(table);
return (NULL);
}
for (x = 0; x < table->size; x++)
table->array[x] = NULL;
return (table);
}
