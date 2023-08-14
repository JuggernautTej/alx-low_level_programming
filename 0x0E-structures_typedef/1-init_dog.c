#include "dog.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * init_dog - a function to initalize a variable of type struct dog.
 * @d: a pointer.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: dog owner.
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
