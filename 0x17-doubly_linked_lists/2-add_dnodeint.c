#include "lists.h"

/**
 * add_dnodeint - a function that adds a node at the beginning of a list.
 * @head: the head of the list.
 * @n: the int to be copied into the new node.
 * Return: NULL or the address to the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode = (dlistint_t *) malloc(sizeof(dlistint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
newnode->prev = NULL;
newnode->next = *head;
if (*head != NULL)
{
(*head)->prev = newnode;
}
*head = newnode;
return (newnode);
}
