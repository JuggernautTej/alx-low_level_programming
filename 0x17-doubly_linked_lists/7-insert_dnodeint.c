#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a
 * doubly linked list.
 * @head: the head of the linked list.
 * @index: the index of node to be returned.
 * Return: the node at the index or NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current;
unsigned int tally = 0;
if (head == NULL)
return (NULL);
for (current = head; current != NULL; current = current->next)
{
if (tally == index)
return (current);
tally++;
}
return (NULL);
}

/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * at a given position.
 * @h: the head of the linked list
 * @idx: the index to be added to.
 * @n: the data of the new node.
 * Return: the address of the new node or NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *newnode, *tmp, *node_at_idx, *node_before_idx;
unsigned int tally = 0;
if (idx == 0)
return (add_dnodeint(h, n));
for (tmp = *h; tmp != NULL; tmp = tmp->next)
{
tally++;
if (tally == idx)
{
node_at_idx =  get_dnodeint_at_index(*h, idx);
if ((node_at_idx == NULL) & (idx != 0))
return (add_dnodeint_end(h, n));
node_before_idx = get_dnodeint_at_index(*h, idx - 1);
newnode =  (dlistint_t *)malloc(sizeof(dlistint_t));
if (newnode == NULL)
return (NULL);
newnode->n = n;
newnode->prev = node_before_idx;
newnode->next = node_at_idx;
node_before_idx->next = newnode;
if (node_at_idx != NULL)
{
node_at_idx->prev = newnode;
}
return (newnode);
}
}
return (NULL);
}
