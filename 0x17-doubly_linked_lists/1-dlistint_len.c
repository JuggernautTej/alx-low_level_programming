#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements
 * on a linked list.
 * @h: the node.
 * Return: number of elements of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *current;
size_t tally = 0;
if (h == NULL)
return (0);
for (current = h; current != NULL;  current = current->next)
{
tally++;
}
return (tally);
}
