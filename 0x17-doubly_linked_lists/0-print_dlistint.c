#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a
 * dlistint_t list.
 * @h: the node.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *current;
size_t tally = 0;
if (h == NULL)
return (EXIT_FAILURE);
for (current = h; current != NULL;  current = current->next)
{
printf("%d\n", current->n);
tally++;
}
return (tally);
}
