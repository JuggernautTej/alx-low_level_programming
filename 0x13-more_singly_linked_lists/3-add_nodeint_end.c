#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of the list.
 * @head: the head of the list.
 * @n: the element of the node.
 * Return: the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode, *tmp;
newnode = (listint_t *) malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);
newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
*head = newnode;
return (newnode);
}
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = newnode;
return (newnode);
}
