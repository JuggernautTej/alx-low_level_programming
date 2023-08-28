#include<stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all elements of a list.
 * @h: pointer to the node in the list.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
const listint_t *current;
size_t tally = 0;
current = h;
if (h == NULL)
return (tally);
while (current != NULL)
{
printf("%u\n", current->n);
tally++;
current = current->next;
}
return (tally);
}
