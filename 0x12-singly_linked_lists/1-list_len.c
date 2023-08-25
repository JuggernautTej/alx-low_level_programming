#include<stdio.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list.
 * @h: pointer.
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
const list_t *current;
size_t tally = 0;
current = h;
if (h == NULL)
return (tally);
while (current != NULL)
{
tally++;
current = current->next;
}
return (tally);
}
