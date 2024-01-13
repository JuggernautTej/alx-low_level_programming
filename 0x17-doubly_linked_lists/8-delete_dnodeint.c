#include "lists.h"

/**
* delete_dnodeint_at_index - a function that deletes the node at index
* idx of a doubly linked list.
* @head: The pointer to the head of the node
* @index: The index of the node to be deleted.
* Return: 1 if successful or -1 otherwise.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp, *node_at_idx;
unsigned int tally = 0;
if (index == 0)
{
if (*head == NULL)
return (-1);
node_at_idx =  *head;
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(node_at_idx);
return (1);
}
for (tmp = *head; tmp != NULL; tmp = tmp->next)
{
tally++;
if (tally == index)
{
node_at_idx =  tmp;
if (node_at_idx->next != NULL)
node_at_idx->next->prev =  node_at_idx->prev;
if (node_at_idx->prev != NULL)
node_at_idx->prev->next = node_at_idx->next;
free(node_at_idx);
return (1);
}
}
return (-1);
}
