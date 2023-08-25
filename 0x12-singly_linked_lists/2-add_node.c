#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "lists.h"

/**
 * _str_len - function that returns the length of a string.
 * @str: the string.
 * Return: integer.
 */
int _str_len(const char *str)
{
if (*str == '\0')
return (0);
else
return (1 + _str_len(str + 1));
}
/**
 * add_node - a function that adds a node at the beginning of a list.
 * @head: the head of the list.
 * @str: the string to be copied into the new node.
 * Return: NULL or the address to the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;
newnode = (list_t *) malloc(sizeof(list_t));
if (newnode == NULL)
return (NULL);
newnode->str = strdup(str);
newnode->len = _str_len(str);
newnode->next = *head;
*head = newnode;
return (newnode);
}
