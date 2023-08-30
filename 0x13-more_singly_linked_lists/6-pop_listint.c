#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a list.
 * @head: the head of the list.
 * Return: the data in the head node as an integer.
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int x;
if (*head == NULL)
return (0);
else
{
tmp = *head;
x = (*head)->n;
*head = (*head)->next;
free(tmp);
return (x);
}
}
