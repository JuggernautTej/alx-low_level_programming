#include "lists.h"

/**
 * free_dlistint - a function that frees a list.
 * @head: the head of the list.
 * Return: Void.
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *currentnode;
while (head != NULL)
{
currentnode = head;
head = head->next;
free(currentnode);
}
}
