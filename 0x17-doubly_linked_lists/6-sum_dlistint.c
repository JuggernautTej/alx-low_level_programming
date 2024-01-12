#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data(n)
 * of a dlistint_t doubly linked list.
 * @head: the head of the linled list.
 * Return: the sum of the data or 0.
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *current;
int sum_result = 0;
if (head == NULL)
return (0);
for (current = head; current != NULL; current = current->next)
{
sum_result += current->n;
}
return (sum_result);
}
