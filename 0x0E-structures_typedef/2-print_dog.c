#include "dog.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * print_dog - Function that initializes a variable of type struct dog
 * struct dog - This is a struct.
 * @d: specific dog
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
}
