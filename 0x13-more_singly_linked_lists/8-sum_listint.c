#include<stdio.h>
#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data in the list.
 * @head: the head of the list.
 * Return: sum of all the data in the list or 0.
 */
int sum_listint(listint_t *head)
{
listint_t *tmp;
int sum = 0;
tmp = head;
if (head == NULL)
return (0);
while (tmp != NULL)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
