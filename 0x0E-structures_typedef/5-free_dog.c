#include<stdio.h>
#include<stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees dogs.
 * @d: pointer containing dog details.
 * Return: void.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);
free(d->owner);
free(d);
}
