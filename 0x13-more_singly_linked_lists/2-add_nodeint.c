#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a list.
 * @head: the new node head.
 * @n: element of the new node.
 * Return: returns the the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;
newnode = (listint_t *) malloc(sizeof(listint_t));
if (newnode == NULL)
return ((listint_t *)NULL);
newnode->n = n;
newnode->next = *head;
*head = newnode;
return (newnode);
}
