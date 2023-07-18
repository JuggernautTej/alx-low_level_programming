#include "dog.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * init_dog - Function that initializes a variable of type struct dog
 * struct dog - This is a struct.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * @d: specific dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct dog));
if (d == NULL)
exit(0);
d->name = name;
d->age = age;
d->owner = owner;
}
