#include<stdio.h>
#include "lists.h"

/**
 * listint_len - a function that returns the numbers of elements.
 * @h: a pointer to the node in the list.
 * Return: the number of elements in a linked list.
 */
size_t listint_len(const listint_t *h)
{
const listint_t *current;
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
