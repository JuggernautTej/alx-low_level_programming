#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees a list.
 * @head: the head of the list.
 * Return: Void.
*/
void free_list(list_t *head)
{
list_t *presentnode, *tmp;
presentnode = head;
while (presentnode != NULL)
{
tmp = presentnode->next;
free(presentnode->str);
free(presentnode);
presentnode = tmp;
}
}
