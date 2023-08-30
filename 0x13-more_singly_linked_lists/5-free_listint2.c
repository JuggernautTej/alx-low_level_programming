#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a list.
 * @head: pointer to the start of the list.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
listint_t *presentnode, *tmp;
presentnode = *head;
while (presentnode != NULL)
{
tmp = presentnode->next;
free(presentnode);
presentnode = tmp;
}
*head = NULL;
free(tmp);
}
