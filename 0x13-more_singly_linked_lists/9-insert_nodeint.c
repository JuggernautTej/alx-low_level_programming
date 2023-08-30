#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * list_len - a function that returns the numbers of elements.
 * @h: a pointer to the node in the list.
 * Return: the number of elements in a linked list.
 */
unsigned int list_len(const listint_t *h)
{
const listint_t *current;
unsigned int tally = 0;
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

/**
 * insert_nodeint_at_index - a function that inerts a new node at
 * a given position.
 * @head: the head of the list.
 * @idx: the index of the list where the new node will be added.
 * @n: data of new node.
 * Return: the address of new node or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newnode, *tmp;
unsigned int list_size;
list_size = list_len(*head);
newnode = (listint_t *) malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);
newnode->n = n;
newnode->next = NULL;
if (idx > list_size)
return ((listint_t *)NULL);
else if (idx == 0)
{
newnode->next = *head;
*head = newnode;
return (newnode);
}
else
{
tmp = *head;
while (--idx)
{
tmp = tmp->next;
}
newnode->next  = tmp->next;
tmp->next = newnode;
return (newnode);
}
}
