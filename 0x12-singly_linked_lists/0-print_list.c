#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: the node.
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
const list_t *current;
size_t tally = 0;
current = h;
if (h == NULL)
return (0);
while (current != NULL)
{
if (current->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", current->len, current->str);
tally++;
current = current->next;
}
return (tally);
}
