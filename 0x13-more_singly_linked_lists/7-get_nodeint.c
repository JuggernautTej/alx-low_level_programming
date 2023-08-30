#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a list.
 * @head: the head of the list.
 * @index: the index.
 * Return: the nth node or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *nodeA;
unsigned int tally = 0;
nodeA = head;
while (nodeA != NULL)
{
if (tally == index)
return (nodeA);
tally++;
nodeA = nodeA->next;
}
return ((listint_t *)NULL);
}
